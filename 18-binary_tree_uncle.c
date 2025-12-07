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
	binary_tree_t *parent_node;

	if (node->parent == NULL)
		return (NULL);

	parent_node = node->parent;
	if (parent_node == NULL)
		return (NULL);

	if (parent_node->left == node)
	{
		if (parent_node->parent == NULL)
			return (NULL);

		return (parent_node->parent->left);
	}

	if (parent_node->right == node)
	{
		if (parent_node->parent == NULL)
			return (NULL);

		return (parent_node->parent->right);
	}

	return (NULL);
}
