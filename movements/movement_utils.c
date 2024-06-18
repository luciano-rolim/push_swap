/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:36:13 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 18:52:05 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_organizer(t_node *stack)
{
	int	index;

	index = 0;
	while (stack)
	{
		stack->index = index;
		index++;
		stack = stack->next;
	}
}

int	movement_check(t_node *stack)
{
	if (!stack)
		return (0);
	if (swap_lstsize(stack) < 2)
		return (0);
	return (1);
}
