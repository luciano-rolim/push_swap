/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:29:17 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 18:07:38 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last_node;

	last_node = NULL;
	if (!new)
		return ;
	if ((*lst) == NULL)
	{
		(*lst) = new;
		new->prev = NULL;
		new->index = 0;
		new->next = NULL;
		return ;
	}
	last_node = swap_lstlast(*lst);
	last_node->next = new;
	new->prev = last_node;
	new->next = NULL;
	index_organizer(*lst);
}
