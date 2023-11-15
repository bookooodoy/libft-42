/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:58:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/10 16:08:01 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(unsigned char *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int	index;
	unsigned char	*destination;
	unsigned char	*ptr;

	ptr = &src[0];
	destination = dest;
	index = 0;
	while (src[0] + ptr; && index < n)
	{
		destination[index] = src[0] + index;
		index++;
		ptr++;
	}
	return ((void *)destination);
}

int	main(void)
{
	char	test[] = "ceci est unt est";
	char const	test2[] = "ceci est un deuxieme test";
	printf("%s | %s\n", test2, test);
	ft_memcpy(test, test2, 15);
	printf("%s | %s\n", test2, test);
	return 0;
}
