/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:38:32 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/04/22 18:47:23 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (ptr = (char *)s + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (ptr = (char *)s + i);
	return (NULL);
}
