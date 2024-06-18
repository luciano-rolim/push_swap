/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_smaller.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:17:45 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 16:16:01 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*current_smaller(t_node *list)
{
	t_node	*smaller_node;
	int		smaller_number;	

	smaller_node = list;
	smaller_number = smaller_node->number;
	list = list->next;
	while (list)
	{
		if (list->number < smaller_number)
		{
			smaller_node = list;
			smaller_number = list->number;
		}
		list = list->next;
	}
	return (smaller_node);
}
