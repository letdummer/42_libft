/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:00:30 by ldummer-          #+#    #+#             */
/*   Updated: 2025/06/11 10:39:59 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 1;
	line = NULL;
	fd = open("tests/long_text.txt", O_RDONLY);
	printf("\t\tOpening file\n\n");
	if (fd < 0)
	{
		printf("Error opening file");
		return (-1);
	}
	line = get_next_line(fd);
	while (line)
	{
		printf("line[%d]: %s\n", i++, line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}

/*int	main(void)
{
	char	*line;
	int		fd;

	fd = open("example.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error opening file");
		return (1);
	}
	printf(" opening file\n");
	line = get_next_line(fd);
	while (line)
	{
		printf("line: %s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}*/

/* int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int fd;
	char *line;

	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (-1);
	
	line = get_next_line(fd);
	while (line)
	{
		printf("line: %s", line);
		free(line);
		line = get_next_line(fd);	
	}
	close (fd);
	return (0);
} */