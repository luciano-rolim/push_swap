/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:31:24 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 17:55:58 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->number;
	b = (*stack)->next->number;
	c = (*stack)->next->next->number;
	if (a < b && b > c)
	{
		rra(stack);
		if (c > a)
			sa(stack);
	}
	else if (a > b && b < c)
	{
		if (a < c)
			sa(stack);
		else if (a > c)
			ra(stack);
	}
	else if (a > b && b > c)
	{
		sa(stack);
		rra(stack);
	}
}

static void	sort_four(t_node **a, t_node **b)
{
	int	regroup;

	regroup = 3;
	pb(a, b);
	sort_three(a);
	while (swap_lstsize(*b) > 0)
	{
		if (swap_lstlast(*a)->number > ((*b)->number) && regroup > 0)
		{
			rra(a);
			regroup--;
		}
		else
			pa(a, b);
	}
	while (regroup-- > 0)
		rra(a);
}

void	special_cases(int size, t_node **a, t_node **b)
{
	if (!a)
		return ;
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
}
