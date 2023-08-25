/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:34:36 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 16:30:55 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stddef.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	if (current->left != NULL)
		btree_apply_infix(current->left, applyf);
	(*applyf)(current->item);
	if (current->right != NULL)
		btree_apply_infix(current->right, applyf);
}
