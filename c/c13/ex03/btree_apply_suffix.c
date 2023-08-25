/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:40:23 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 14:45:03 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*current;

	current = root;
	(*applyf)(current->item);
	btree_apply_suffix(current->right, applyf);
	btree_apply_suffix(current->left, applyf);
}
