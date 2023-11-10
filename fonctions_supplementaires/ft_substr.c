/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:47 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/10 16:14:32 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_ret;
	size_t 	index;

	index = 0;
	to_ret = (char *)malloc(sizeof(char) * len);
	while (index < len && len > 0)
	{
		to_ret[index] = s[start + index];
		index++;
	}
	to_ret[index] = '\0';
	return (to_ret);
}
