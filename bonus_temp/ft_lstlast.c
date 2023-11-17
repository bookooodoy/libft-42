/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:57:33 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 19:00:22 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
	t_list * current;
	t_list * last;

	current = lst;
	while (current->next != NULL)
		current = current->next;
	last = current;
	return (last);
}
