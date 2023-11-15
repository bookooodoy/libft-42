/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:28:57 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/15 12:31:50 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_strlen(char const *s)
{
    int    index;

    index = 0;
    while (s[index])
        index++;
    return (index);
}

void    free_tab(char **tab)
{
    int    i;

    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}

char    *create_word(int start, int end, char const *word, char c)
{
    char    *to_ret;
    int    index;

    index = 0;
    to_ret = (char *)malloc(sizeof(char) * (end - start) + 2);
    while (start <= end)
    {
          if (word[start] != c)
          {
              to_ret[index] = word[start];
              index++;
          }  
        start++;
    }
    to_ret[index] = '\0';
    return (to_ret);
}


char    **ft_split(char const *s, char c)
{
    int    index;
    int    end;
    int    start;
    char    **tab;
    int    k;

    k = 0;
    tab = (char **)malloc(sizeof(char *) * (ft_strlen(s) / 2 + 1));
    if (!(tab))
    {
        free(tab);
        return (NULL);
    }
    index = 0;
    start = 0;
    while (s[index])
    {
        if (s[index] == c)
        {
            end = index - 1;
            tab[k] = create_word(start, end, s, c);
            if (!(tab[k]))
            {
                free_tab(tab);
                return (NULL);
            }
            k++;
            start = end + 1;
        }
        index++;
    }
    tab[k] = NULL;
    return (tab);
}

int    main(void)
{
    char const *test = "ceci est un test ";
    char **new;
    new = ft_split(test, ' ');
    for (int i = 0; i<4; i++)
        printf("%s\n", new[i]);
    return 0;
}
