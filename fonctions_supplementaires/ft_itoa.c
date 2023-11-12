/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:55:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/09 16:13:25 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int        count_digit_length(int n)
{
        int        length = 0;
        while (n /=10)
                length++;
        return (length);
}

int        ft_strlen(char *s)
{
        int        index;

        index = 0;
        while (s[index])
                index++;
        return (index);
}

char        *reverse_char(char *s, int size)
{
        char        *reversed;
        int        end;
        int        index;

        index = 0;
        end = ft_strlen(s) - 1;
        reversed = (char *)malloc(sizeof(char) * size + 2);
        while (s[index])
        {
                reversed[index] = s[end - index];
                index++;
        }
        reversed[index] = '\0';
        return (reversed);
}

char        *ft_itoa(int n)
{
        int        dlen = count_digit_length(n);
        char        *itoa;
        char        *start_num;
        int        d = 0;

        start_num = (char *)malloc(sizeof(char) * dlen + 2);
        if (!(start_num))
        {
                start_num = NULL;
                return (start_num);
        }
        while (dlen >= 0)
        {
                start_num[d++] = (n % 10) + '0';
                dlen--;
                n /= 10;
        }
        start_num[d] = '\0';
        itoa = reverse_char(start_num, d);
        return (itoa);
}

int        main(void)
{
        char *itoa = ft_itoa(100);
        printf("%s", itoa);
        return 0;
}