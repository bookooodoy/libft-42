/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:10:00 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 17:21:37 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	index;

	index = 0;
	if (size > 0)
	{
		while (src[index] && index < size)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (index);
}
