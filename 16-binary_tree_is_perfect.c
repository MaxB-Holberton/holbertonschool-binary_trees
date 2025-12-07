#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * check_balance - balance of the tree (subtrees)
 * @tree: tree to traverse
 *
 * Return: balance of the tree
 */
int check_balance(const binary_tree_t *tree)
{
	int left_i = 0;
	int right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_i = check_balance(tree->left) + 1;

	if (tree->right != NULL)
		right_i = check_balance(tree->right) + 1;

	if (tree->parent == NULL)
		return (left_i - right_i);

	if (left_i > right_i)
		return (left_i);

	return (right_i);
}
/**
 * check_fullness - is the node full
 * @tree: node to check
 *
 * Return: 0 if not full, 1 if full
 */
int check_fullness(const binary_tree_t *tree)
{
	int left_i = 0;
	int right_i = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right_i = check_fullness(tree->left);
	left_i = check_fullness(tree->right);

	if (left_i == 1 && right_i == 1)
		return (1);

	return (0);
}

/**
 * binary_tree_is_perfect - is the node full
 * @tree: node to check
 *
 * Return: 0 if not full, 1 if full
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full = 0;
	int balance = 0;

	full = check_fullness(tree);

	balance = check_balance(tree);

	if (full == 1 && balance == 0)
		return (1);

	return (0);
}
