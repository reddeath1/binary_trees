#include "binary_trees.h"

/**
 * binary_tree_size - main function that measures the size of a binary tree
 * @tree: pointer node binary tree
 * Return: measurement  size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizes = 1;

	if (!tree)
		return (0);
	sizes += binary_tree_size(tree->left);
	sizes += binary_tree_size(tree->right);
	return (sizes);
}
