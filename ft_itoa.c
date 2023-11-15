/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:55:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 15:27:03 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit_length(int n)
{
	int	length;

	length = 0;
	while (n /=10)
		length++;
	return (length);
}

size_t  ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

char	*reverse_char(char *s, int size)
{
	char	*reversed;
	int	end;
	int	index;

	index = 0;
	end = ft_strlen((const char *)s);
	reversed = (char *)malloc(sizeof(char) * size);
	while (s[index])
	{
		reversed[index] = s[end - index];
		index++;
	}
	return (reversed);
}

char	*ft_itoa(int n)
{
	int	dlen;
	char	*itoa;
	char	*start_num;
	int	d;

	d = 0;
	dlen = count_digit_length(n);
	start_num = (char *)malloc(sizeof(char) * dlen);
	if (!(start_num))
	{
		start_num = NULL;
		return (start_num);
	}
	while (dlen--)
	{
		start_num[d++] = (n % 10) + '0';
		n /= 10;
	}
	itoa = reverse_char(start_num, d);
	return (itoa);
}

int	main(void)
{
	char *itoa = ft_itoa(100);
	printf("%s", itoa);
	return 0;
}
