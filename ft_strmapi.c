/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:18:27 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 12:30:47 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	index;

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
