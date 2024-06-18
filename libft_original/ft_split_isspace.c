/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_isspace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:25:01 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/06/17 15:33:13 by lmeneghe         ###   ########.fr       */
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

static int	ft_loop_allocation(char const *s, char **ptr, int i)
{
	int		start;
	int		j;

	j = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) && s[i])
			i++;
		if (!ft_isspace(s[i]) && s[i])
		{
			start = i;
			while (!ft_isspace(s[i]) && s[i])
				i++;
			ptr[j] = ft_substr(s, start, i - start);
			if (!ft_check_allocation(ptr, j))
				return (0);
			j++;
		}
	}
	return (1);
}

static int	ft_wordcount(char const *s)
{
	int	count_word;
	int	i;

	count_word = 0;
	i = 0;
	while (s[i] != '\0') 
	{
		if (!ft_isspace(s[i]))
		{
			count_word++;
			while (!ft_isspace(s[i]) && s[i] != '\0')
				i++;
		}
		else 
			i++;
	}
	return (count_word);
}

char	**ft_split_isspace(char const *s)
{
	int		i;
	int		count_word;
	char	**ptr;

	if (!s)
		return (NULL);
	count_word = ft_wordcount(s);
	ptr = malloc((count_word + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (!ft_loop_allocation(s, ptr, i))
		return (NULL);
	ptr[count_word] = NULL;
	return (ptr);
}
