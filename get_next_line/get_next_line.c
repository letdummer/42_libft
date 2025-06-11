/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:35:25 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 09:53:43 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Main function that coordinates operations  
// Uses a static buffer to store data between calls  
// Reads the file, returns the next line, and updates the buffer  
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup_gnl("");
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(buffer);
	buffer = clean_buffer(buffer);
	return (line);
}

// Iterates through the string looking for a line break  
// Returns 1 if found, 0 otherwise
int	find_line(char *buffer)
{
	int	i;

	i = 0;
	if (!buffer)
		return (0);
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

// Reads data from the file in blocks, 
// with a dynamic size defined by BUFFER_SIZE  
// Searches for a line break or the end of the file  
char	*read_file(int fd, char *buffer)
{
	ssize_t		bytes;
	char		*read_chunk;
	char		*new_buffer;

	read_chunk = ft_calloc_gnl((BUFFER_SIZE + 1), sizeof(char));
	if (!read_chunk)
		return (NULL);
	if (!buffer)
		buffer = ft_strdup_gnl("");
	bytes = 1;
	while (find_line(buffer) == 0 && bytes > 0)
	{
		bytes = read(fd, read_chunk, BUFFER_SIZE);
		if (bytes < 0)
			return (free(read_chunk), free(buffer), NULL);
		read_chunk[bytes] = '\0';
		new_buffer = ft_strjoin_gnl(buffer, read_chunk);
		free(buffer);
		buffer = new_buffer;
	}
	free(read_chunk);
	return (buffer);
}

// Helper function that extracts the next line from the buffer  
// Returns the found line
char	*extract_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!buffer || !*buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc_gnl((i + 2), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

// Helper function that removes the extracted line from the buffer  
// Returns the updated buffer
char	*clean_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*new_buffer;

	i = 0;
	j = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free(buffer), NULL);
	new_buffer = ft_calloc_gnl((ft_strlen_gnl(buffer) - i), sizeof(char));
	if (!new_buffer)
		return (NULL);
	i++;
	while (buffer[i])
		new_buffer[j++] = buffer[i++];
	new_buffer[j] = '\0';
	free(buffer);
	return (new_buffer);
}
