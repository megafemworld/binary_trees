#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor otherwise 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l_height = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		r_height = 1 + binary_tree_balance(tree->right);
	return (l_height - r_height);

}
