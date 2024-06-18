/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_smaller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:21:38 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/14 16:17:29 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_smaller(int nbr, t_node *list)
{
	if (!list)
		return (0);
	while (list)
	{
		if (list->number < nbr)
			return (0);
		list = list->next;
	}
	return (1);
}
