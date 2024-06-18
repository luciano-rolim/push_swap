/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:50:10 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 17:55:50 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	regroup_b(t_node **b)
{
	t_node	*bigger;

	bigger = current_bigger(*b);
	if (upper_half(bigger, *b))
	{
		while ((*b)->number != bigger->number)
			rb(b);
	}
	else
	{
		while ((*b)->number != bigger->number)
			rrb(b);
	}
}

static void	main_sorting(t_node **a, t_node **b)
{
	int	regroup;

	if (!a)
		return ;
	regroup = 3;
	pb (a, b);
	pb (a, b);
	while (swap_lstsize(*a) > 3)
		move_a_to_b(a, b);
	sort_three(a);
	regroup_b(b);
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

void	sort_list(t_node **a, t_node **b)
{
	int	size;

	if (!a)
		return ;
	if (is_sorted(*a))
		return ;
	size = swap_lstsize(*a);
	if (size == 2 || size == 3 || size == 4)
		special_cases(size, a, b);
	else
		main_sorting(a, b);
}
