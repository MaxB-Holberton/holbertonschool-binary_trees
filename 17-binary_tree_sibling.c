#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - is the node full
 * @node: node to check
 *
 * Return: the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent_node = node->parent;

	if (parent_node->left == node)
		return (parent_node->right);

	if (parent_node->right == node)
		return (parent_node->left);

	return (NULL);
}
