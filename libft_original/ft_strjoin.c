/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:26:57 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:05:12 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*new_str;

	if (!prefix || !suffix)
		return (NULL);
	size = ft_strlen(prefix) + ft_strlen(suffix) + 1;
	new_str = malloc(size);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (prefix[i])
	{
		new_str[i] = prefix[i];
		i++;
	}
	j = 0;
	while (suffix[j])
	{
		new_str[i + j] = suffix[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}
