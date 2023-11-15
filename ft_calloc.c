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

char	*fill_zeroes(char *to_fill, int	size)
{
	int	index;

	index = 0;
	while (index < size)
		to_fill[index++] = '\0';
	return (to_fill);
}

void 	*ft_calloc(int nmemb, int size)
{
	char	*proutax;
	char	**calloced;
	int	index;

	index = 0;
	if ((nmemb == 0) || (size == 0))
	{
		calloced = NULL;
		return (calloced);
	}
	calloced = (char **)malloc(size * nmemb);
	if (!(calloced))
	{
		calloced = NULL;
		return (calloced);
	}
	while (index < nmemb)
	{
		proutax = (char *)malloc(sizeof(char) * size);
		if (!(proutax))
		{
			proutax = NULL;
			return ((void *)proutax);
		}
		calloced[index++] = fill_zeroes(proutax, size);
	}
	return ((void *)calloced);
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
