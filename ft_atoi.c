/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:22:13 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 15:15:32 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		index;
	char	*test;
	int		sign;
	int		to_ret;

	to_ret = 0;
	sign = 1;
	test = (char *)nptr;
	index = 0;
	while (ft_isspace(test[index]))
		index++;
	if (test[index] == '-' || test[index] == '+')
	{
		if (test[index] == '-')
			sign *= -1;
		index++;
	}
	while (ft_isdigit(test[index]))
	{
		to_ret = (10 * to_ret) + (test[index] - '0');
		if (!(ft_isdigit(test[index + 1])))
			break ;
		index++;
	}
	return (to_ret * sign);
}
