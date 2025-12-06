#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a node
 * @parent: the parent node
 * @value: value to add to the node
 *
 * Return: pointer to the binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *next_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		next_node = parent->right;
		new_node->right = next_node;
		next_node->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
