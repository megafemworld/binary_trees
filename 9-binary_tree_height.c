#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	binary_tree_t *l = tree->left;
	binary_tree_t *r = tree->right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	while (l != NULL)
	{
		count_left = count_left + 1;
		l = l->left;
	}
	while (r != NULL)
	{
		count_right = count_right + 1;
		r = r->right;
	}
	if (count_left >= count_right)
		return (count_left);
	else
		return (count_right);
}
