#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - balance of the tree
 * @tree: tree to traverse
 *
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	binary_tree_t *current;

	if (tree == NULL)
		return (0);

	current = tree->left;
	while (current != NULL)
	{
		balance++;
		current = current->left;
	}

	current = tree->right;
	while (current != NULL)
	{
		balance--;
		current = current->right;
	}

	return (balance);
}
