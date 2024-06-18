/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:48:58 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 18:02:36 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	a_movements(t_node *current_node, t_node *a)
{
	int	a_moves;

	if (!current_node || !a)
		return (0);
	if (upper_half(current_node, a))
	{
		a_moves = (current_node->index + 1);
	}
	else
		a_moves = ((swap_lstsize(a) - 1) - (current_node->index) + 2);
	return (a_moves);
}

static int	b_movements(t_node *target_node, t_node *b)
{
	int	b_moves;

	if (!target_node || !b)
		return (0);
	if (upper_half(target_node, b))
		b_moves = (target_node->index);
	else
		b_moves = ((swap_lstsize(b) - 1) - (target_node->index) + 1);
	return (b_moves);
}

static int	movement_savings(t_node *node, t_node *target, t_node *a, t_node *b)
{
	int	diff_current;
	int	diff_target;

	if (!node || !target || !a || !b)
		return (0);
	if (upper_half(node, a) && upper_half(target, b) \
		&& node->index != 0 && target-> index != 0)
	{
		if (node->index == target->index)
			return (node->index);
		else
			return (ft_lower_number(node->index, target->index));
	}
	else if (!upper_half(node, a) && !upper_half(target, b))
	{
		diff_current = ((swap_lstlast(a)->index) - node->index);
		diff_target = ((swap_lstlast(b)->index) - target->index);
		if (diff_current == diff_target)
			return (diff_current);
		else
			return (ft_lower_number(diff_current, diff_target));
	}
	else
		return (0);
}

int	moves_calc(t_node *current_node, t_node *a, t_node *b)
{
	int		moves;
	t_node	*target_node;

	if (!current_node || !a || !b)
		return (0);
	moves = a_movements(current_node, a);
	target_node = target(current_node->number, b);
	if (!target_node)
		return (++moves);
	if (target_node->index == 0)
		return (moves);
	moves += b_movements(target_node, b);
	moves -= movement_savings(current_node, target_node, a, b);
	return (moves);
}
