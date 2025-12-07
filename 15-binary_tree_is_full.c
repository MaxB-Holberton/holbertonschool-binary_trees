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
	int i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		if (tree->left != NULL)
			i = binary_tree_is_full(tree->left);

		if (tree->right != NULL)
			i = binary_tree_is_full(tree->right);
	}

	return (i);
}
