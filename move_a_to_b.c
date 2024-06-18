/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:58:59 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 18:02:53 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b(t_node **a, t_node **b, t_node *target_node)
{
	if (!a || !b)
		return ;
	if (!target_node)
	{
		pb(a, b);
		rb(b);
		return ;
	}
	if (upper_half(target_node, *b))
	{
		while (target_node->index != 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while ((target_node->index != 0))
			rrb(b);
		pb(a, b);
	}
}

static void	makemoves(t_node *node, t_node *target, t_node **a, t_node **b)
{
	if (!node || !a || !b)
		return ;
	if (upper_half(node, *a))
	{
		if (upper_half(target, *b) && (target))
		{
			while (node->index != 0 && target->index != 0)
				rr(a, b);
		}
		while (node->index != 0)
			ra(a);
	}
	else
	{
		if (!upper_half(target, *b) && (target))
		{
			while (node->index != 0 && target->index != 0)
				rrr(a, b);
		}
		while (node->index != 0)
			rra(a);
	}
	move_to_b(a, b, target);
}

void	move_a_to_b(t_node **a, t_node **b)
{
	t_node	*tmp;
	t_node	*best_node;
	t_node	*target_node;
	int		moves;
	int		short_moves;

	if (!(*a))
		return ;
	tmp = (*a);
	short_moves = moves_calc(tmp, *a, *b);
	best_node = tmp;
	tmp = tmp->next;
	while (tmp)
	{
		moves = moves_calc(tmp, *a, *b);
		if (moves < short_moves)
		{
			short_moves = moves;
			best_node = tmp;
		}
		tmp = tmp->next;
	}
	target_node = target(best_node->number, *b);
	makemoves(best_node, target_node, a, b);
}
