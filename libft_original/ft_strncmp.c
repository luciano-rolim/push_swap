/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:58:27 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:06:05 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	if (!s1 || !s2)
		return (0);
	i = 0;
	result = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		result = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (result != 0)
			return (result);
		i++;
	}
	return (result);
}
