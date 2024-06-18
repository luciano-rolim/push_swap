/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:25:44 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:04:55 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	s2 = ft_calloc(len, 1);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
