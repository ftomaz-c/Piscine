/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:17:40 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 19:37:43 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->data = data;
	node->next = NULL;
	return node;
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*ptr;
	t_list	*new_node;
	int		swapped;

	new_node = ft_create_elem(data);
	if (!ptr)
		return ;
	new_node->next = *begin_list;
	*begin_list = new_node;
	swapped = 1;
	ptr = NULL;
	while (swapped)
	{
		swapped = 0;
		list_ptr = *begin_list;
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

/* #include <stdio.h>

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

void print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%d -> ", *(int *)(list->data));
		list = list->next;
	}
	printf("NULL\n");
}

int cmp(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
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

int	main()
{
	t_list	*lst;
	int		tab[] = {1, 2, 3, 4, 5, 7, 8, 9};
	int		value;
	int		i;

	lst = NULL;
	i = 0;
	while (i < sizeof(tab) / sizeof(tab[0]))
	{
		ft_list_push_back(&lst, &tab[i]);
		i++;
	}
	printf("Before insert: \n");
	print_list(lst);
	printf("\n");
	value = 6;
	ft_sorted_list_insert(&lst, &value, cmp);
	printf("After insert: \n");
	print_list(lst);
	printf("\n");
	free_nodes(lst);
	lst = NULL;
} */
