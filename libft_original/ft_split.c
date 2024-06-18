/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:25:01 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 14:56:28 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_allocation(char **ptr, int j)
{
	if (ptr[j] == NULL)
	{
		while (j >= 0)
		{
			free(ptr[j]);
			j--;
		}
		free(ptr);
		return (0);
	}
	return (1);
}

static int	ft_loop_allocation(char const *s, char c, char **ptr, int i)
{
	int		start;
	int		j;

	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			ptr[j] = ft_substr(s, start, i - start);
			if (!ft_check_allocation(ptr, j))
				return (0);
			j++;
		}
	}
	return (1);
}

static int	ft_wordcount(char const *s, char c)
{
	int	count_word;
	int	i;

	count_word = 0;
	i = 0;
	while (s[i] != '\0') 
	{
		if (s[i] != c) 
		{
			count_word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else 
			i++;
	}
	return (count_word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count_word;
	char	**ptr;

	if (!s)
		return (NULL);
	count_word = ft_wordcount(s, c);
	ptr = malloc((count_word + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (!ft_loop_allocation(s, c, ptr, i))
		return (NULL);
	ptr[count_word] = NULL;
	return (ptr);
}
