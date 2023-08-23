/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:38:35 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 19:52:27 by ftomaz-c         ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*ptr;
	int		swapped;

	ft_list_merge(&*begin_list1, begin_list2);
	ptr = NULL;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		list_ptr = *begin_list1;
		while (list_ptr->next != ptr)
		{
			if((*cmp)(list_ptr->data, list_ptr->next->data) > 0)
			{
				ft_swap((int *)list_ptr->data, (int *)list_ptr->next->data);
				swapped = 1;
			}
			list_ptr = list_ptr->next;
		}
		ptr = list_ptr;
	}
}
/*
t_list *ft_create_elem(void *data)
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
		printf("%d -> ", *(int *)(list->data));
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

int cmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	t_list	*list1;
	t_list	*list2;
	int tab1[] = {1, 3, 5, 7, 9};
	int tab2[] = {2, 4, 6, 8, 10};

	int		i;

	list1 = NULL;
	list2 = NULL;
	i = 0;
	while (i < sizeof(tab1) / sizeof(tab1[0]))
	{
		ft_list_push_back(&list1, &tab1[i]);
		i++;
	}
	i = 0;
	while (i < sizeof(tab2) / sizeof(tab2[0]))
	{
		ft_list_push_back(&list2, &tab2[i]);
		i++;
	}
	printf("List 1 before merging: ");
	print_list(list1);
	printf("List 2 before merging: ");
	print_list(list2);
	ft_sorted_list_merge(&list1, list2, cmp);
	printf("List 1 after merging: ");
	print_list(list1);
	free_nodes(list1);
	list1 = NULL;
	list2 = NULL;
	return (0);
}
 */
