/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:23:55 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 17:23:58 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(const char *l)
{
        int     index;

        index = 0;
        while (l[index])
                index++;
        return (index);
}

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        size_t  index;

        index = 0;
        if (dest < src)
        {
                while (index < n)
                {
                        ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
                        index++;
                }
                ((char *)dest)[index + 1] = '\0';
        }
        else
        {
                while (index < n - 1)
                {
                        ((unsigned char *)dest)[(n - 2) - index] = ((unsigned char *)src)[(n - 2) - index];
                        index++;
                }
                ((char *)dest)[index] = '\0';
        }
  
        return (dest);
}

int     main(void)
{
        char    src[] = "abcdefgh";
        char    *dest = src + 4;
        char    *new = ft_memmove(dest, src, 5);
        printf("%s, %s = %s\n", src, dest, new);
        return 0;
}
