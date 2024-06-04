#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a binary tree node on right
 * @parent: Pointer to the left parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_new_node;

	if (parent == NULL)
		return (NULL);
	right_new_node = malloc(sizeof(binary_tree_t));
	if (right_new_node == NULL)
		return (NULL);
	right_new_node->n = value;
	right_new_node->parent = parent;
	right_new_node->right = parent->right;
	right_new_node->right = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = right_new_node;

	}
	parent->right = right_new_node;
	return (right_new_node);
}
