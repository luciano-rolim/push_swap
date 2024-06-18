/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:22:28 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/06 14:06:59 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
		{
			last_node = lst;
			return (last_node);
		}
		lst = lst->next;
	}
	return (last_node);
}
