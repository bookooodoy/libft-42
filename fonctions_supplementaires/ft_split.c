/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:47:55 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/08 16:46:00 by nraymond         ###   ########.fr       */
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

char	*create_word(int start, int end, char const *word, char c)
{
	char	*to_ret;
	int	index;

	index = 0;
	to_ret = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!(to_ret))
	{
		to_ret = NULL;
		return (to_ret)l;
	}
	while (start-- < end)
	{
  if ((word[end - start] != c)
   {
		  to_ret[index] = word[end - start];
	  	index++;
   }
	}
	to_ret[index] = '\0';
	return (to_ret);
}


char	**ft_split(char const *s, char c)
{
	int	index;
	int	end;
	int	start;
	char	**tab;
	int	k;

	k = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_strlen(s) / 2 + 1));
	if (!(tab))
	{
		tab = NULL;
		return (tab);
	}
	index = 0;
	while (s[index])
	{
		start = 0;
		if (s[index] == c)
		{
			end = index - 1;
			tab[k++] = create_word((start, end, s);
			start = end;
		}
		index++;
	}
	tab[k] = '\0';
	return (tab);
}

int	main(void)
{
	
}
