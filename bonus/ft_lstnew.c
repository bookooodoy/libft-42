/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:10:11 by nraymond          #+#    #+#             */
/*   Updated: 2023/11/14 18:37:31 by nraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} 		t_list;

t_list	*ft_lstnew(void *content)
{
	t_list * head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
	return (head);
}

/*t_list *ft_addelem(void *content, t_list * last_elem)
{
	t_list * new = NULL;
	new = (t_list)malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	last_elem->next = new;
	return (last_elem);
}*/

void	printf_list(t_list * head)
{
	t_list * current = head;

	while (current != NULL)
	{
		printf("%p-> ", current->content);
		current = current->next;
	}
}

int	main(void)
{
	t_list * head = ft_lstnew((void *)5);
	printf_list(head);
	return 0;
}
