#include "binary_trees.h"

/**
 * binary_tree_height - main function that gets the height of a binary tree
 * @tree: main node to draw height from for tree
 * Return: (size_t representing height, 0 on failure or NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right += 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
