#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		size = 1 + binary_tree_size(tree->left);
	if (tree->right != NULL)
		size = size + binary_tree_size(tree->right);
	return (size);
}
