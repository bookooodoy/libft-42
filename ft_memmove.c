/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:23:55 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 18:59:09 by nraymond         ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (dest < src)
	{
		while (index < n)
		{
			((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
			index++;
		}
		((char *)dest)[index + 1] = '\0';
	}
	else
	{
		while (index < n - 1)
		{
			((unsigned char *)dest)[(n - 2) - index] = ((unsigned char *)
					src)[(n - 2) - index];
			index++;
		}
		((char *)dest)[index] = '\0';
	}
	return (dest);
}
