#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

void free_right_branch(binary_tree_t *b_right);
void free_left_branch(binary_tree_t *b_left);
/**
 * free_left_branch - delete the left branch
 * @b_left: the parent to delete
 *
 * Return: void
 */
void free_left_branch(binary_tree_t *b_left)
{
	if (b_left->left != NULL)
		free_left_branch(b_left->left);

	if (b_left->right != NULL)
		free_right_branch(b_left->right);

	free(b_left);
}
/**
 * free_right_branch - delete the right branch
 * @b_right: the parent to delete
 *
 * Return: void
 */
void free_right_branch(binary_tree_t *b_right)
{
	if (b_right->right != NULL)
		free_right_branch(b_right->right);

	if (b_right->left != NULL)
		free_left_branch(b_right->left);

	free(b_right);
}
/**
 * binary_tree_delete - delete the tree
 * @tree: the parent to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		free_left_branch(tree->left);

	if (tree->right != NULL)
		free_right_branch(tree->right);

	free(tree);
}
