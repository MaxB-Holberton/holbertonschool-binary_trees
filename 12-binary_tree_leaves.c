#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - depth of the tree
 * @tree: tree to traverse
 *
 * Return: leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		i++;

	if (tree->left != NULL)
		i += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		i += binary_tree_leaves(tree->right);

	return (i);
}
