/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:17:59 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 15:00:01 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size <= 0 || (ft_strlen(dst) >= size))
		return (size + ft_strlen(src));
	else
		while (index < size - 1 && src[index])
		{
			dst[size + index] = src[index];
			index++;
		}
	dst[size + index] = '\0';
	return (ft_strlen(const char *)dst);
}
