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

int	ft_strlen(const char *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index-- != 0)
	{
		if (s[index] == c)
			return (char *)s+index;
	}
	return (0);
}
