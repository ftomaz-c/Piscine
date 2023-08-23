/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:00:27 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 16:27:27 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list *current;
	t_list *previous;
	t_list *to_remove;

	current = *begin_list;
	previous = NULL;
	while (current != NULL)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			to_remove = current;
			current = current->next;
			if (previous != NULL)
				previous->next = current;
			else
				*begin_list = current;
			(*free_fct)(to_remove->data);
			free(to_remove);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

/* #include <stdio.h>

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

void	free_int(void *data)
{
	free(data);
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
	int		values[] = {5, 10, 5, 15, 20};
	int		i;
	int		*value;

	lst = NULL;
	reference = 5;
	i = 0;
	while (i < sizeof(values) / sizeof(values[0]))
	{
		value = (int *)malloc(sizeof(int));
		*value = values[i];
		ft_list_push_back(&lst, value);
		i++;
	}
	printf("List before removal:\n");
	ft_list_foreach_if(lst, print_int, &reference, compare_int);
	ft_list_remove_if(&lst, &reference, compare_int, free_int);
	printf("\nList after removal:\n");
	ft_list_foreach_if(lst, print_int, &reference, compare_int);
	printf("\n");
	free_nodes(lst);
	lst = NULL;
	return (0);
} */
