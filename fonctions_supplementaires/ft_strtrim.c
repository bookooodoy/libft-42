/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:21:28 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/07 20:40:44 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_strlen(char const *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	index;
	char	*new;
	int	k;

	index = 0;
	k = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[index])
	{
		if (!(is_trimset(s1[index], set)))
		{
			new[k] = s1[index];
			k++;
		}
		index++;
	}
	return ((char *)new);
}

int	main(void)
{
	char	*test = "fils de pute";
	char	*set = " du";
	char	*new = ft_strtrim(test, set);
	printf("%s", new);
	return 0;
}
