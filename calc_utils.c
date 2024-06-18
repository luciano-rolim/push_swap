/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:37:48 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 18:03:05 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*find_target_b(int value, t_node *b)
{
	t_node	*target_node;
	int		initialized;
	int		max_value;

	if (!b)
		return (NULL);
	initialized = 0;
	while (b)
	{
		if (initialized == 0 && value > b->number)
		{
			max_value = b->number;
			target_node = b;
			initialized++;
		}
		if (initialized != 0 && value > b->number && b->number > max_value)
		{
			target_node = b;
			max_value = b->number;
		}
		b = b->next;
	}
	return (target_node);
}

t_node	*target(int value, t_node *b)
{
	t_node	*smaller;

	if (!b)
		return (NULL);
	if (is_smaller(value, b))
	{
		smaller = current_smaller(b);
		if (smaller->next == NULL)
			return (NULL);
		else
			return (smaller->next);
	}
	return (find_target_b(value, b));
}

int	upper_half(t_node *node, t_node *stack)
{
	int	central_element;

	if (!node || !stack)
		return (0);
	if (ft_isodd(swap_lstsize(stack)))
		central_element = ((swap_lstsize(stack) / 2) + 1);
	else
		central_element = swap_lstsize(stack) / 2;
	if ((node->index + 1) <= central_element)
		return (1);
	else
		return (0);
}
