/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_bigger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:17:45 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 16:16:04 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*current_bigger(t_node *list)
{
	t_node	*bigger_node;
	int		bigger_number;	

	bigger_node = list;
	bigger_number = bigger_node->number;
	list = list->next;
	while (list)
	{
		if (list->number > bigger_number)
		{
			bigger_node = list;
			bigger_number = list->number;
		}
		list = list->next;
	}
	return (bigger_node);
}
