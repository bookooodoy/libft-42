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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	k;

	index = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[index] && index < len - 1)
	{
		if (big[index] == little[0])
		{
			k = 0;
			while (k < ft_strlen(little) && (index + k < len - 1))
			{
				if (big[index + k] == little[k])
					k++;
				else
					break;
			}
			if (k == ft_strlen(little))
				return ((char *)big+index);
		}
		index++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("(res mine) haystack = %s, needle = %s, result = %s\n", av[1], av[2], ft_strnstr(av[1], av[2], 10));
		printf("(res lib) haystack = %s, needle = %s, result = %s\n", av[1], av[2], strnstr(av[1], av[2], 10));
	}
	return 0;
}*/