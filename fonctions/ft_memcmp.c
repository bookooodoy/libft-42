/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/09 12:30:48 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_memcmp(const void *s1, const void *s2, int n)
{
	int	index;
	unsigned const char	*first;
	unsigned const char	*last;

	index = 0;
	if (n <= 0)
		return (0);
	first = s1;
	last = s2;
	while ((first[index] && last[index]) && index < n)
	{
		if (first[index] != last[index])
			return ((int )first[index] - last[index]);
		index++;
	}
	return ((int)first[index] - last[index]);
}

#include <stdio.h>

int	main(void)
{
	char	*s1 = "This is a test.";
	int	s2[] = {1,2,3,5};
	printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, 10));	
	return (0);
}
