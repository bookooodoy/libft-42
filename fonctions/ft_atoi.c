/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:22:13 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 17:58:22 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}


int	ft_isdigit(char c)
{
	if (c <= 48 && c >= 57)
		return (1);
	return (0);
}
int	atoi(const char *nptr)
{
	int	index;
	char	*test;
	int	sign;
	int	to_ret;

	to_ret = 0;
	sign = 1;
	test = nptr;
	index = 0;
	while (ft_isspace(test[index]))
		index++;
	if (test[index] == '-')
		sign *= -1;
	else if (test[index] != '+' && !(ft_isdigit(test[index])))
		return (0);
	while (ft_isdigit(test[index]))
	{
		to_ret = (10 * to_ret) + (test[index] - '0');
		if (!(ft_isdigit(test[index + 1])))
			break;
	}
	return (to_ret * sign);
}
