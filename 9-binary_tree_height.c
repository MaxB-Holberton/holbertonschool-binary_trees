#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - traverse the tree
 * @tree: tree to traverse
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_i = 0;
	size_t right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_i += binary_tree_height(tree->left);
		left_i++;
	}

	if (tree->right != NULL)
	{
		right_i += binary_tree_height(tree->right);
		right_i++;
	}

	if (left_i > right_i)
		return (left_i);

	return (right_i);
}
