#include "binary_trees.h"

/**
 * binary_tree_balance - Main function that measures the balance factor of a
 * binary tree.
 * @tree: The pointer to root node to calculate balance factor.
 * Return: (balance factor of the tree.)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
