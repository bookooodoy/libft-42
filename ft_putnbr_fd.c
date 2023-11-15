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

int	count_digit_length(int n)
{
	int	length;

	length = 0;
	while (n =/10)
		length++;
	return (length);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = count_digit_length(n);
	write(fd, n, len - 1);
}

int	main()
{
	ft_putnbr_fd(10, 1);
	return 0;
}
