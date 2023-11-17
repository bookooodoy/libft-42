/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:57:27 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/06 17:04:46 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	size_t	size;

	size = ft_strlen(s);
	index = 0;
	while (index <= size)
	{
		if (s[size - index] == c)
			return ((char *)s+(size - index));
		index++;
	}
	return (NULL);
}
