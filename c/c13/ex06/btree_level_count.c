/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:12:32 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 18:07:21 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int btree_level_count(t_btree *root)
{
	int	count_left;
	int	count_right;

	if (!root)
		return (0);
	count_left = 1 + btree_level_count(root->left);
	count_right = 1 + btree_level_count(root->right);
	return (max(count_left, count_right));
}

#include <stdio.h>
#include <stdlib.h>

/* int main()
{
	int			max_depth;
	t_btree		*root = (t_btree*)malloc(sizeof(t_btree));
	t_btree		*left_child = (t_btree*)malloc(sizeof(t_btree));
	t_btree		*right_child = (t_btree*)malloc(sizeof(t_btree));
	t_btree		*left_left_child = (t_btree*)malloc(sizeof(t_btree));
	t_btree		*right_right_child = (t_btree*)malloc(sizeof(t_btree));
	t_btree		*right_right_right_child = (t_btree*)malloc(sizeof(t_btree));

	root->left = left_child;
	root->right = right_child;
	left_child->left = left_left_child;
	left_child->right = NULL;
	right_child->left = NULL;
	right_child->right = right_right_child;
	left_left_child->left = NULL;
	left_left_child->right = NULL;
	right_right_child->left = NULL;
	right_right_child->right = right_right_right_child;
	right_right_right_child->left = NULL;
	right_right_right_child->right = NULL;

	max_depth = btree_level_count(root);
	printf("Maximum depth of the binary tree: %d\n", max_depth);

	free(root);
	free(left_child);
	free(right_child);
	free(left_left_child);
	free(right_right_child);
	free(right_right_right_child);
	return (0);
}

 */
