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

#include "libft.h"

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

