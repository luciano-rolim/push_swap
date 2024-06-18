/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:08 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 18:05:01 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*last;
	t_node	*tmp;

	if (!stack)
		return ;
	tmp = (*stack);
	last = swap_lstlast((*stack));
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
	index_organizer(*stack);
}

void	ra(t_node **stack_a)
{
	if (!stack_a)
		return ;
	if (!movement_check(*stack_a))
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	if (!stack_b)
		return ;
	if (!movement_check(*stack_b))
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	if (!a || !b)
		return ;
	if (!movement_check(*a) || !movement_check(*b))
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
