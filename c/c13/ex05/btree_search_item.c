/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:41:22 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 17:12:07 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stddef.h>

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree	*current;
	t_btree	*left;
	t_btree	*right;

	if (!root)
		return (NULL);
	current = root;
	left = btree_search_item(current->left, data_ref, cmpf);
	if (left)
		return (left);
	if ((*cmpf)(current, data_ref) == 0)
		return (current);
	right = btree_search_item(current->right, data_ref, cmpf);
	if (right)
		return (right);
}


// binary search algorithm - more efficient

/* void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree	*current;
	int		cmpf_result;

	if (!root)
		return (NULL);
	current = root;
	cmpf_result = (*cmpf)(data_ref, current->item);
	if (cmpf_result < 0)
		return (btree_search_item(current->left, data_ref, cmpf));
	else if (cmpf_result > 0)
		return (btree_search_item(current->right, data_ref, cmpf));
	return (current);
} */
