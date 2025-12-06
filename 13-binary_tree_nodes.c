#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - depth of the tree
 * @tree: tree to traverse
 *
 * Return: nodes of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_i = 0;
	size_t right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_i = binary_tree_nodes(tree->left) + 1;

	if(tree->right != NULL)
		right_i = binary_tree_nodes(tree->right) + 1;

	if (left_i == right_i)
		return (1 << left_i) - 1;

	return (left_i + right_i);
}
