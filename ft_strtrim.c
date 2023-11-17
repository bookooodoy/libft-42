/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:21:28 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 12:32:24 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trimset(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
			
}

int	get_start(char const *s, char const *set)
{
	int	index;

	index = 0;
	while (is_trimset(s[index], set))
		index++;
	return (index);
}

int	get_end(char const *s, char const *set)
{
	int	index;
	size_t	end;

	end = ft_strlen(s) - 1;
	index = 0;
	while (is_trimset(s[end - index], set))
		index++;
	return (end - index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int	k;
	int	start;
	int	end;

	start = get_start(s1, set);
	end = get_end(s1, set) + 1;
	k = 0;
	
	new = (char *)malloc(sizeof(char) * (end - start) + 1);
	while (start < end )
		new[k++] = s1[start++];
	new[k] = '\0';
	return ((char *)new);
}
