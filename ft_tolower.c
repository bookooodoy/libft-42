/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:54:37 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/06 15:55:47 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	to_ret;

	to_ret = c;
	if (c >= 65 && c <= 90)
		to_ret += 32;
	return (to_ret);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_tolower('S'));
	return (0);
}
