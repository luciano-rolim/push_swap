/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lower_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:44:52 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 12:01:13 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_lower_number(long int a, long int b)
{
	if (a < b)
		return (a);
	else if (a > b)
		return (b);
	else
		return (0);
}
