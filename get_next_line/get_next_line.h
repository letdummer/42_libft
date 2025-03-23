/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 21:59:14 by ldummer-          #+#    #+#             */
/*   Updated: 2025/03/23 22:00:25 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>

# include <unistd.h>	//COMENTAR
# include <stdio.h> //COMENTAR

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_file(int fd, char *tmp);
char	*extract_line(char *tmp);
char	*clean_buffer(char *tmp);
char	*ft_strdup(const char *str1);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t nitems, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

#endif
