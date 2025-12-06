#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - is the node full
 * @tree: node to check
 *
 * Return: 0 if
 */
int binary_tree_is_full(const binary_tree_t *tree)
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
