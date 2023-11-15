/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:14:09 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 14:32:47 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	index;

	index = 0;
	while ((s1[index] && s2[index]) && index < n)
	{
		if (s1[index] != s2[index])
			return (int)(s1[index] - s2[index]);
		index++;
	}
	return (int)(s1[index] - s2[index]);
}
