/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:20:38 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/23 00:35:18 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
} */

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*lst;
	t_list	*current;
	t_list	*tmp;
	int		index;

	lst = NULL;
	current = NULL;
	index = 0;
	while (index < size)
	{
		tmp = ft_create_elem(strs[index]);
		if (!tmp)
		{
			/* free_nodes(lst); */
			lst = NULL;
			return (NULL);
		}
		if (lst == NULL)
			lst = tmp;
		else
			current->next = tmp;
		current = tmp;
		index++;
	}
	return (lst);
}

/* #include <stdio.h>

int main()
{
	t_list	*lst;
	t_list	*current;
	t_list	*tmp;
	char	*data;
	char	*marvel_names[] = {
		"Iron Man", "Thor", "Captain America",
		"Black Widow", "Hulk", "Black Panther",
		"Spider-Man", "Doctor Strange", "Scarlet Witch",
		NULL };
	lst = ft_list_push_strs(9, marvel_names);
	current = lst;
	while (current != NULL)
	{
		data = (char *)(current->data);
		printf("%s\n", data);
		current = current->next;
	}
	free_nodes(lst);
	lst = NULL;
	return 0;
} */
