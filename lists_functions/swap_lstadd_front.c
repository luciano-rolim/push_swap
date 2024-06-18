/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:18:50 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/12 16:46:48 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_lstadd_front(t_node **lst, t_node *new)
{
	if (!new)
		return ;
	if (!*lst)
		new->next = NULL;
	else
	{
		new->next = (*lst);
		(*lst)->prev = new;
	}
	new->prev = NULL;
	(*lst) = new;
	index_organizer(*lst);
}
