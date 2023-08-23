/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:49:05 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 13:59:45 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref,
int (*cmp)(void *, void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}

/* #include <stdio.h>

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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_node;
	t_list	*current;

	new_node = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new_node;
		return ;
	}
	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}

int	compare_int(void *a, void *b)
{
	int	*int_a;
	int	*int_b;

	int_a = (int *)a;
	int_b = (int *)b;
	return (*int_a - *int_b);
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
	t_list	*lst;
	t_list	*found_element;
	int		reference;
	int		values[] = {5, 10, 20};
	int		i;

	lst = NULL;
	reference = 15;
	i = 0;
	while (i < sizeof(values) / sizeof(values[0]))
	{
		ft_list_push_back(&lst, &values[i]);
		i++;
	}
	found_element = ft_list_find(lst, &reference, compare_int);
	if (found_element != NULL) {
		printf("Element found: %d\n", *(int *)(found_element->data));
	} else {
		printf("Element not found.\n");
	}
	free_nodes(lst);
	lst = NULL;
	return (0);
} */
