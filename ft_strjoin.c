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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	max_size;
	char	*new_string;

	max_size = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * max_size + 1);
	if (!(new_string))
		return (NULL);
	size_t	i = 0;
	size_t k = 0;

	while (i < ft_strlen(s1))
	{
		new_string[i] = s1[i];
		i++;
	}
	while (k < ft_strlen(s2))
	{
		new_string[i + k] = s2[k];
		k++;
	}
	new_string[i + k] = '\0'; 
	return (new_string);
}
