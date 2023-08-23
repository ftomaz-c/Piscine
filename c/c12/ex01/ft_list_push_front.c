/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:04:12 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 22:29:38 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	new_node->next = *begin_list;
	*begin_list = new_node;
}

/* #include <stdio.h>

int main()
{
	t_list	*lst;
	t_list	*current;
	t_list	*tmp;
	int		*data;
	int		num1;
	int		num2;
	int		num3;

	lst	= NULL;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	ft_list_push_front(&lst, &num1);
	ft_list_push_front(&lst, &num2);
	ft_list_push_front(&lst, &num3);
	current = lst;
	while (current != NULL)
	{
		data = (int *)(current->data);
		printf("%d\n", *data);
		current = current->next;
	}
	current = lst;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	lst = NULL;
	return 0;
} */
