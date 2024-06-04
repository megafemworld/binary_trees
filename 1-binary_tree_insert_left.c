#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node on left
 * @parent: Pointer to the left parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_new_node;

	if (parent == NULL)
		return (NULL);
	left_new_node = malloc(sizeof(binary_tree_t));
	if (left_new_node == NULL)
		return (NULL);
	left_new_node->n = value;
	left_new_node->parent = parent;
	left_new_node->left = parent->left;
	left_new_node->right = NULL;
	if (parent->left != NULL)
		parent->left->parent = left_new_node;
	parent->left = left_new_node;
	return (left_new_node);
}
