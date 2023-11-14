/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:00:56 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 19:09:02 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
{
void *content;
struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list * current = *lst;

	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->next = NULL;
}
