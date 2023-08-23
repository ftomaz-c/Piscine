/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 01:03:44 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 01:25:41 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*current;
	int		i;

	current = begin_list;
	i = 0;
	while (i < nbr)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
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
	t_list	*result;
	int		position;

	lst = ft_create_elem("Node 1");
	lst->next = ft_create_elem("Node 2");
	lst->next->next = ft_create_elem("Node 3");
	position = 3;
	result = ft_list_at(lst, position);
	if (result)
		printf("Node at position %u: %s\n", position, (char *)result->data);
	else
		printf("Position %u is out of bounds.\n", position);
	return (0);
}
 */
