/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeneghe <lmeneghe@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:51:49 by lmeneghe          #+#    #+#             */
/*   Updated: 2024/04/19 15:50:52 by lmeneghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	full_size;
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	full_size = nmemb * size;
	if (full_size / size != nmemb)
		return (NULL);
	ptr = malloc(full_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, full_size);
	return (ptr);
}
