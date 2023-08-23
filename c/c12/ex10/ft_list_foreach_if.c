/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:19:39 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 16:23:23 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)(void *, void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
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

void	print_int(void *data)
{
	int	*int_ptr;

	int_ptr = (int *)data;
	printf("%d ", *int_ptr);
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

int	main()
{
	t_list	*lst;
	int		reference;
	int		value1;
	int		value2;
	int		value3;

	value1 = 5;
	value2 = 10;
	value3 = 5;
	lst = NULL;
	ft_list_push_back(&lst, &value1);
	ft_list_push_back(&lst, &value2);
	ft_list_push_back(&lst, &value3);
	reference = 5;
	printf("Printing integers equal to %d:\n", reference);
	ft_list_foreach_if(lst, print_int, &reference, compare_int);
	printf("\n");
	free_nodes(lst);
	lst = NULL;
	return (0);
} */
