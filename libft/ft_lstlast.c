/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldummer- <ldummer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:09:15 by ldummer-          #+#    #+#             */
/*   Updated: 2025/01/16 15:56:05 by ldummer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	/* instead of looping directly over the element, we check if
	 * there is a next element in the list, if not, that means we
	 * reached the end and we have to return the current pointer
	 * if we looped over the element directly like for ft_lstsize
	 * we would be returning NULL every time
	 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
