#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - depth of the tree
 * @tree: tree to traverse
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	i++;
	if (tree->left != NULL)
		i += binary_tree_size(tree->left);

	if (tree->right != NULL)
		i += binary_tree_size(tree->right);

	return (i);
}
