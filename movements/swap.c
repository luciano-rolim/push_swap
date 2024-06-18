/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:10 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 17:36:41 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_node *stack)
{
	t_node	*second_node;
	int		tmp;

	if (!stack)
		return ;
	tmp = stack->number;
	second_node = stack->next;
	stack->number = second_node->number;
	second_node->number = tmp;
}

void	sa(t_node **stack_a)
{
	if (!movement_check(*stack_a))
		return ;
	swap(*stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	if (!movement_check(*stack_b))
		return ;
	swap(*stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	if (!movement_check(*a) || !movement_check(*b))
		return ;
	swap(*a);
	swap(*b);
	write(1, "ss\n", 3);
}
