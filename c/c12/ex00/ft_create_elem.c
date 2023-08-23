/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:46:17 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/22 22:11:13 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

/* #include <stdio.h>

int main()
{
	t_list	*node;
	t_list	*current;
	int		*data;
	int		num;

	num = 10;
	node = ft_create_elem(&num);
	current = node;
	data = (int *)(current->data);
	printf("%d\n", *data);
	current = current->next;
	free(node);
	return 0;
} */
