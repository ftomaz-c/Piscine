/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:42:43 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 17:56:31 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	if (!*begin_list1 || !begin_list2)
		return ;
	current = *begin_list1;
	while (current->next != NULL)
		current = current->next;
	current->next = begin_list2;
}

/* t_list *ft_create_elem(void *data)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->data = data;
	node->next = NULL;
	return node;
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_node = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new_node;
		return;
	}
	t_list *current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

#include <stdio.h>

void print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%s -> ", (char *)(list->data));
		list = list->next;
	}
	printf("NULL\n");
}

void	free_nodes(t_list *lst)
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

int main()
{
	t_list	*list1;
	t_list	*list2;
	char	*lotr_names1[] = {
		"Frodo",
		"Sam",
		"Aragorn",
		"Legolas",
		"Gimli",
		"Gandalf",
		"Boromir",
		"Faramir",
		"Arwen",
		NULL
		};
	char	*lotr_names2[] = {
		"Galadriel",
		"Elrond",
		"Sméagol",
		"Saruman",
		"Pippin",
		"Merry",
		NULL
		};
	int		i;

	list1 = NULL;
	list2 = NULL;
	i = 0;
	while (lotr_names1[i] != NULL)
	{
		ft_list_push_back(&list1, lotr_names1[i]);
		i++;
	}
	i = 0;
	while (lotr_names2[i] != NULL)
	{
		ft_list_push_back(&list2, lotr_names2[i]);
		i++;
	}
	printf("List 1 before merging: ");
	print_list(list1);
	printf("List 2 before merging: ");
	print_list(list2);
	ft_list_merge(&list1, list2);
	printf("List 1 after merging: ");
	print_list(list1);
	free_nodes(list1);
	list1 = NULL;
	list2 = NULL;
	return (0);
}
 */
