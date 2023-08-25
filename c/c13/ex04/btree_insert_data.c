/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:45:00 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/25 16:40:42 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	if (!new_node)
		return (NULL);
	new_node->item = item;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*current;
	t_btree	*left;
	t_btree	*right;

	if (*root == NULL)
		*root = btree_create_node(item);
	current = *root;
	if ((*cmpf)(item, current->item) < 0)
		btree_insert_data(&current->left, item, cmpf);
	else if ((*cmpf)(item, current->item) > 0)
		btree_insert_data(&current->right, item, cmpf);
}

/* #include <stdio.h>

int cmpf(void *a, void *b)
{
	int int_a;
	int int_b;

	int_a = *(int *)a;
	int_b = *(int *)b;
	if (int_a < int_b)
		return (-1);
	if (int_a > int_b)
		return (1);
	return (0);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return;
	if (root->left != NULL)
		btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	if (root->right != NULL)
		btree_apply_infix(root->right, applyf);
}

void	print(void *item)
{
	printf("%d\n", *(int *)item);
	fflush(stdout);
}

int	main()
{
	t_btree *root = NULL;
	int value[] = { 5, 10, 5, 6, 5, 34, 10, 5, 32, 1, 7};
	int	i;

	i = 0;
	while (i < sizeof(value) / sizeof(value[0]))
	{
		btree_insert_data(&root, &value[i], cmpf);
		i++;
	}
	btree_apply_infix(root, print);
	return (0);
}
 */
