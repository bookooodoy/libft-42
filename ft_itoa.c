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

static int	count_digit_length(int n)
{
	int	length;

	length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*reverse_char(char *s, int size, int sign)
{
	char	*reversed;
	int		end;
	int		index;
	int		k;

	k = 0;
	index = 0;
	end = ft_strlen((const char *)s) - 2;
	reversed = (char *)malloc(sizeof(char) * size + 2);
	if (!(reversed))
		return (NULL);
	if (sign)
		reversed[k++] = '-';
	while (index < size)
	{
		reversed[k] = s[end - index];
		index++;
		k++;
	}
	reversed[index] = '\0';
	return (reversed);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	char	*start_num;
	int		d;
	int		sign;
	int		dlen;

	dlen = count_digit_length(n);
	sign = 0;
	d = 0;
	start_num = (char *)malloc(sizeof(char) * dlen);
	if (!(start_num))
		return (NULL);
	if (n < 0 && n != 0)
	{
		n *= -1;
		sign = 1;
	}
	while (dlen-- >= 0)
	{
		start_num[d++] = (n % 10) + '0';
		n /= 10;
	}
	itoa = reverse_char(start_num, d, sign);
	return (itoa);
}
