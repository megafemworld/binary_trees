#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaf otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
	{
		if (tree->left == NULL)
			leaf = leaf + 1;
		else
			binary_tree_leaves(tree->left);
	}
	if (tree->right != NULL)
	{
		if (tree->right != NULL)
			leaf = leaf + 1;
		else
			binary_tree_leaves(tree->right);
	}
	return (leaf);
}
