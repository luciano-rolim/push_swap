/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:31:11 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 18:00:38 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft_original/libft.h"
# include <sys/types.h>
# include <limits.h>
# include <stdio.h>

typedef struct t_node
{
	struct t_node	*prev;
	int				number;
	int				index;
	struct t_node	*next;
}	t_node;

//Primary functions
void	create_list(t_node **stack_a, char **argv);
void	sort_list(t_node **a, t_node **b);
void	special_cases(int size, t_node **a, t_node **b);
void	sort_three(t_node **stack);
void	move_a_to_b(t_node **a, t_node **b);
int		moves_calc(t_node *current_node, t_node *a, t_node *b);
int		upper_half(t_node *node, t_node *stack);
t_node	*target(int value, t_node *b);

//Movement utils
int		movement_check(t_node *stack);
void	index_organizer(t_node *stack);

//Push functions
void	push(t_node **src, t_node **dest);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

//Reverse functions
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **a, t_node **b);

//Rotate functions
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **a, t_node **b);

//Swap functions
void	ss(t_node **stack_a, t_node **stack_b);
void	sb(t_node **stack_b);
void	sa(t_node **stack_a);

//Customized list functions
t_node	*current_bigger(t_node *list);
t_node	*current_smaller(t_node *list);
int		is_bigger(int nbr, t_node *list);
int		is_smaller(int nbr, t_node *list);
int		is_sorted(t_node *stack);
void	swap_lstadd_back(t_node **lst, t_node *new);
void	swap_lstadd_front(t_node **lst, t_node *new);
void	swap_lstclear(t_node **lst);
void	swap_lstdelone(t_node *lst);
t_node	*swap_lstnew(int number);
int		swap_lstsize(t_node *lst);
t_node	*swap_lstlast(t_node *lst);

#endif