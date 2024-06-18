/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:21:27 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:03:45 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		result;

	if (!s1 || !s2)
		return (0);
	i = 0;
	result = 0;
	while (i < n)
	{
		result = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
