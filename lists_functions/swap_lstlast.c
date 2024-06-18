/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:22:28 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 12:36:58 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*swap_lstlast(t_node *lst)
{
	t_node	*last_node;

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
