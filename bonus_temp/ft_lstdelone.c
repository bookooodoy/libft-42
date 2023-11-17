/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:09:39 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 19:16:05 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

{
void *content;
struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)()
}

