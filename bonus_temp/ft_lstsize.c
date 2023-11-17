/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:53:22 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 18:56:44 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

int	ft_lstsize(t_list *lst)
{
	int	cpt;
	t_list * current = lst;

	cpt = 0;
	while (current->next != NULL)
	{
		current = current->next;
		cpt++;
	}
	return (cpt);
}
