/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:38:20 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 18:51:34 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list * new->next = *lst;
	*lst = new;
}
