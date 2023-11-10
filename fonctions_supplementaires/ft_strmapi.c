/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:18:27 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/09 19:39:11 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

/*char	f(unsigned int a, char b)
{
	return (a + b);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int	index;

	index = 0;
	ret = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(ret))
	{
		ret = NULL;
		return (ret);
	}
	while (index < ft_strlen(s))
	{
		ret[index] = (*f)(index, s[index]);
		index++;
	}
	return (ret);
}

/*int	main(void)
{
	char const *test = "fils de pute";

	printf("%s", ft_strmapi(test, f));
}*/
