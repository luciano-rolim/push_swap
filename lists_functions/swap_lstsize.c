/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:25:00 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/11 14:42:05 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap_lstsize(t_node *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
