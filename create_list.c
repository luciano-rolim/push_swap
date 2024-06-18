/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:21:00 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 17:55:02 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error_clean(t_node **stack_a, char **split)
{
	int	i;

	i = 0;
	write(2, "Error\n", 6);
	swap_lstclear(stack_a);
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	exit(EXIT_FAILURE);
}

static int	check_arg(char *argv, long int nbr)
{
	int	j;
	int	sig_count;
	int	n_count;

	j = 0;
	sig_count = 0;
	n_count = 0;
	while (argv[j])
	{
		if (argv[j] != '+' && argv[j] != '-' && !ft_isdigit(argv[j]))
			return (0);
		if (ft_isdigit(argv[j]))
			n_count++;
		if (argv[j] == '+' || argv[j] == '-')
		{
			sig_count++;
			if (n_count != 0 || sig_count > 1 || argv[j + 1] == '0' \
			|| !ft_isdigit(argv[j + 1]))
				return (0);
		}
		j++;
	}
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (0);
	return (1);
}

static int	check_duplicates(t_node *stack_a, long int nbr)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->number == nbr)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

static int	check_validity(char *string, t_node **stack_a, char **split)
{
	long int	nbr;

	if (ft_strlen(string) == 0)
	{
		error_clean(stack_a, split);
		return (0);
	}
	nbr = ft_atol(string);
	if (!check_arg(string, nbr))
	{
		error_clean(stack_a, split);
		return (0);
	}
	swap_lstadd_back(stack_a, swap_lstnew(nbr));
	if (!stack_a || !check_duplicates(*stack_a, nbr))
	{
		error_clean(stack_a, split);
		return (0);
	}
	return (1);
}

void	create_list(t_node **stack_a, char **argv)
{
	int			i;
	int			j;
	char		**split;

	i = 1;
	while (argv[i])
	{
		split = ft_split_isspace(argv[i]);
		j = 0;
		if (!split[j])
			error_clean(stack_a, split);
		while (split[j])
		{
			check_validity(split[j], stack_a, split);
			j++;
		}
		j = 0;
		while (split[j])
		{
			free(split[j]);
			j++;
		}
		free(split);
		i++;
	}
}
