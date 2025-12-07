#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - is the node full
 * @tree: node to check
 *
 * Return: the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->parent->left == NULL)
			return (NULL);

		return (node->parent->parent->left);
	}

	if (node->parent->right == node)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);

		return (node->parent->parent->right);
	}

	return (NULL);
}
