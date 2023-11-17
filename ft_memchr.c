/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:33:25 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 16:08:19 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	int	index;
	const	char *b;

	b = s;
	index = 0;
	while (index < n)
	{
		if (b[index] == c)
			return (void *)(s + index);
		index++;
	}
	return (void *)(0);
}
