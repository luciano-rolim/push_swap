/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:56:06 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/12 11:22:28 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (!src)
		return ;
	tmp = (*src);
	(*src) = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	swap_lstadd_front(dest, tmp);
	index_organizer(*src);
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_b))
		return ;
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (!(*stack_a))
		return ;
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
