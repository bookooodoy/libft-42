/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:55:50 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/13 17:55:02 by nraymond         ###   ########.fr       */
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

char        *reverse_char(char *s, int size, int sign)
{
        char        *reversed;
        int        end;
        int        index;
	int	k;

	k = 0;
	index = 0;
        end = ft_strlen(s) - 1;
        reversed = (char *)malloc(sizeof(char) * size +  3);
	if (!(reversed))
	{
		reversed = NULL;
		return (NULL);
	}
	if (sign)
		reversed[k++] = '-';
        while (s[index])
        {
                reversed[k] = s[end - index];
                index++;
		k++;
        }
        reversed[++index] = '\0';
        return (reversed);
}

char        *ft_itoa(int n)
{
        int        dlen = count_digit_length(n);
        char        *itoa;
        char        *start_num;
        int        d = 0;
	int	sign = 0;

        start_num = (char *)malloc(sizeof(char) * dlen + 2);
        if (!(start_num))
        {
                start_num = NULL;
                return (start_num);
        }
	if (n < 0 && n != 0)
	{
		n *= -1;
		sign = 1;
	}
        while (dlen >= 0)
        {
                start_num[d++] = (n % 10) + '0';
                dlen--;
                n /= 10;
        }
        start_num[d] = '\0';
        itoa = reverse_char(start_num, d, sign);
        return (itoa);
}

int        main(void)
{
        char *itoa = ft_itoa(-1000);
        printf("%s", itoa);
        return 0;
}
