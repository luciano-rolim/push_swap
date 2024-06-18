/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:12:58 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:06:27 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	mem_allocate;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup("\0"));
	if (len <= s_len - start)
		mem_allocate = len + 1;
	else
		mem_allocate = s_len - start + 1;
	new_str = malloc(mem_allocate);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
