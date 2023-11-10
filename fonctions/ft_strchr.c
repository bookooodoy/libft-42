/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:07:31 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/06 17:11:13 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return (char *)s+index;
		index++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	test[] = "fils d epute e efils de pute";
	printf("%s",ft_strchr(test, 'f'));
	return (0);
}
