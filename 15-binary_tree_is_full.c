#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - is the node full
 * @tree: node to check
 *
 * Return: 0 if not full, 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_i = 0;
	int right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right_i = binary_tree_is_full(tree->left);
	left_i = binary_tree_is_full(tree->right);

	if (left_i == 1 && right_i == 1)
		return (1);

	return (0);
}
