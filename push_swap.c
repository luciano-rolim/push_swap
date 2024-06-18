/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:15:49 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 16:09:25 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node			*a;
	t_node			*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	create_list(&a, argv);
	sort_list(&a, &b);
	swap_lstclear(&a);
}
