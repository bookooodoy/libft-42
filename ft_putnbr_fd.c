/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:34:56 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 12:31:34 by nraymond         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	*digit;

	digit = ft_itoa(n);
	if (n < 0)
		len = count_digit_length(n) + 1;
	else
		len = count_digit_length(n);
	write(fd, digit, len);
}
