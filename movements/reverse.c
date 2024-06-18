/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:03 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 12:55:08 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*last_to_new;
	t_node	*new_last;

	if (!(stack))
		return ;
	last_to_new = swap_lstlast((*stack));
	new_last = last_to_new->prev;
	new_last->next = NULL;
	last_to_new->next = (*stack);
	last_to_new->prev = NULL;
	(*stack)->prev = last_to_new;
	(*stack) = last_to_new;
	index_organizer(*stack);
}

void	rra(t_node **stack_a)
{
	if (!(*stack_a))
		return ;
	if (!movement_check(*stack_a))
		return ;
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	if (!(*stack_b))
		return ;
	if (!movement_check(*stack_b))
		return ;
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	if (!(*a) || !(*b))
		return ;
	if (!movement_check(*a) || !movement_check(*b))
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
