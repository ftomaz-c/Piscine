/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:10:41 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 23:20:04 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

/* #include <stdio.h>

int main()
{
	t_list	*lst;
	t_list	*current;
	int		num1;
	int		num2;
	int		num3;

	lst = NULL;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	ft_list_push_back(&lst, &num1);
	ft_list_push_back(&lst, &num2);
	ft_list_push_back(&lst, &num3);
	current = lst;
	while (current != NULL)
	{
		int *data = (int *)(current->data);
		printf("%d\n", *data);
		current = current->next;
	}
	current = lst;
	while (current != NULL)
	{
		t_list *tmp = current->next;
		free(current);
		current = tmp;
	}
	lst = NULL;
	return (0);
} */
