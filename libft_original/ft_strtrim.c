/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:33:46 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/04 19:06:21 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_s1;
	int		i;
	int		j;
	int		size;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while ((j >= 0) && j > i && (ft_strrchr(set, s1[j - 1])))
		j--;
	size = (j - i) + 1;
	trim_s1 = malloc(size);
	if (trim_s1 == NULL)
		return (NULL);
	ft_strlcpy(trim_s1, s1 + i, size);
	return (trim_s1);
}
