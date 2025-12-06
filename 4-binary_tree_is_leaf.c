#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a lead
 * @node: node to check
 *
 * 1 on leaf, 0 on non leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
