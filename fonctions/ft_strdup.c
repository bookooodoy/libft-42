/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:11:20 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/09 10:25:02 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char	*c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int	index;

	index = 0;
	duplicate = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!(duplicate))
	{
		duplicate = NULL;
		return (duplicate);
	}
	while (index < ft_strlen(s))
	{
		duplicate[index] = s[index];
		index++;
	}
	return (duplicate);
}
