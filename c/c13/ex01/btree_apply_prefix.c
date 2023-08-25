/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:21:36 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 16:30:48 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stddef.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	(*applyf)(current->item);
	if (current->left != NULL)
		btree_apply_prefix(current->left, applyf);
	if (current->right != NULL)
		btree_apply_prefix(current->right, applyf);
}
