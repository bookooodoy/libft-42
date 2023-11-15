/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:19 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/06 15:52:48 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	to_ret;

	to_ret = c;
	if (c >= 97 && c <= 122)
		to_ret -= 32;
	return (to_ret);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_toupper('q'));
	return (0);
}
