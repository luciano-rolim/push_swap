/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:55:16 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/04/22 18:49:16 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	j = 0;
	if ((little)[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((big[i + j] == little[j]) && ((i + j) < len))
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
