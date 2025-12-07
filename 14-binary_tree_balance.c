#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - balance of the tree (subtrees)
 * @tree: tree to traverse
 *
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_i = 0;
	int right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_i = binary_tree_balance(tree->left) + 1;

	if (tree->right != NULL)
		right_i = binary_tree_balance(tree->right) + 1;

	if (tree->parent == NULL)
		return (left_i - right_i);

	if (left_i > right_i)
		return (left_i);

	return (right_i);
}
