/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:01:29 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/17 19:38:22 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	k;

	index = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[index] && index <= len)
	{
		if (big[index] == little[0])
		{
			k = 0;
			while (k < ft_strlen(little) && (index + k < len - 1))
			{
				if (big[index + k] == little[k])
					k++;
			}
			if (k == ft_strlen(little))
				return ((char *) big + index);
		}
		index++;
	}
	return (NULL);
}
