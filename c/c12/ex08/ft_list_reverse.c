/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:34:48 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 02:43:45 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*previous;
	t_list	*next;

	current = *begin_list;
	previous = NULL;
	while(current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}

/* void	free_nodes(t_list *lst)
{
	t_list	*current;
	t_list	*tmp;

	current = lst;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

#include <stdio.h>

int main()
{
	t_list	*lst;
	t_list	*current;

	lst = ft_create_elem("Node_1");
	lst->next = ft_create_elem("Node_2");
	lst->next->next = ft_create_elem("Node_3");
	lst->next->next->next = ft_create_elem("Node_4");
	lst->next->next->next->next = ft_create_elem("Node_5");

	current = lst;
	printf("Original list:\n");
	while (current)
	{
		printf("%s -> ", (char *)current->data);
		current = current->next;
	}
	printf("NULL\n");
	ft_list_reverse(&lst);
	current = lst;
	printf("\nReversed list:\n");
	while (current)
	{
		printf("%s -> ", (char *)current->data);
		current = current->next;
	}
	printf("NULL\n");
	free_nodes(lst);
	return 0;
} */
