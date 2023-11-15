/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:20:14 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 12:32:02 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char const *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	max_size;
	char	*new_string;
	int	i;
	int	k;

	i  = 0;
	k = 0;
	max_size = ft_strlen(s1) + ft_strlen(s2); 
	new_string = (char *)malloc(sizeof(char) * max_size);
	if (!(new_string))
	{
		new_string = NULL;
		return (new_string);
	}
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		new_string[i + k] = s2[k];
		k++;
	}
	new_string[i + k] = '\0';
	return (new_string);
}
