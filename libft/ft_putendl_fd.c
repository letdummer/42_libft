/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lethallyn <lethallyn@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:44:07 by lethallyn         #+#    #+#             */
/*   Updated: 2024/11/07 19:46:50 by lethallyn        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 

void	ft_putstr_fd(char *s, int fd)
{
	size_t i;

	if (s == NULL)
		return;
	
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

int	main(void)
{
	ft_putendl_fd("Hello, World!", 1);
	ft_putendl_fd("Olá, mundo!", 1);
	ft_putendl_fd("Привет, мир!", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd(NULL, 1);
	return (0);
} */

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
