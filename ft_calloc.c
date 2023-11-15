/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:18:16 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 15:16:01 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_zeroes(char *s, size_t n)
{
	size_t			index;

	index = 0;
	while (index < n)
		s[index++] = '\0';
	return (s);
}

static void	free_tab(char **tab)
{
	int	index;

	index = 0;
	while (tab[index])
	{
		free(tab[index]);
		index++;
	}
	free(tab);
}

static void	*sub_calloc(size_t nmemb, size_t size)
{
	char	*proutax;
	char	**calloced;
	size_t	index;

	calloced = (char **)malloc(size * nmemb);
	if (!(calloced))
	{
		free_tab(calloced);
		return ((void *) NULL);
	}
	while (index < nmemb)
	{
		proutax = (char *)malloc(sizeof(char) * size);
		if (!(proutax))
		{
			free_tab(calloced);
			return ((void *) NULL);
		}
		calloced[index++] = fill_zeroes(proutax, (size_t)size);
	}
	return ((void *)calloced);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	**test;

	if ((nmemb == 0) || (size == 0))
		return (malloc(0));
	if ((nmemb * size) / size != nmemb)
		return (NULL);
	test = sub_calloc(nmemb, size);
	return (test);
}

/*int	main(void)
{
	char	*test = calloc(10,10);
	char	*test2 = ft_calloc(10,10);
	char	*test3 = calloc(0,2);
	char	*test4 = ft_calloc(0,2);
	char	*test5 = calloc(3,0);
	char	*test6 = ft_calloc(3,0);
	char	*test7 = calloc(0,0);
	char	*test8 = ft_calloc(0,0);
	return 0;
}*/
