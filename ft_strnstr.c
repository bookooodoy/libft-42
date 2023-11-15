/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:01:29 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 15:27:15 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	index;
	int	k;

	index = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[index] && index < len)
	{
		if (big[index] == little[0])
		{
			k = 0;
			while (k < ft_strlen(big) - index)
			{
				if (big[index + k] == little[k])
					k++;
				else
					break;
			}
			if (k == ft_strlen(little))
				return ((char *)(big + index));
		}
		index++;
	}
	return ("\0");
}
