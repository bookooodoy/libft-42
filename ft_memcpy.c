/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:58:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/10 16:08:01 by nraymond         ###   ########.fr       */
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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*destination;
	unsigned char	*ptr;

	ptr = (unsigned char *)src;
	destination = dest;
	index = 0;
	while (ptr[index] && index < n)
	{
		destination[index] = ptr[index];
		index++;
	}
	return ((void *)destination);
}
