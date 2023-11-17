/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:14:09 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/16 15:36:53 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && (index < n - 1))
	{
		if (s1[index] != s2[index])
		{
			if (!(ft_isascii(s1[index])) || !(ft_isascii(s2[index])))
				return (1);
			else
				return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("(res mine) = %s - %s = %d for %d bytes.\n", av[1], av[2], ft_strncmp(av[1], av[2], 100), 100);
		printf("(res lib) = %s - %s = %d for %d bytes.\n", av[1], av[2], strncmp(av[1], av[2], 100), 100);
	}
	printf("(res mine) = %s - %s = %d for %d bytes.\n", "test\200", "test\0", ft_strncmp("test\200", "test\0", 100), 100);
	printf("(res mine) = %s - %s = %d for %d bytes.\n", "test\200", "test\0", strncmp("test\200", "test\0", 100), 100);
	return 0;
}*/