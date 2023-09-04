#include "binary_trees.h"

/**
 * binary_tree_nodes - main function that counts the leaves in a binary tree
 * @tree: A pointer node binary tree
 * Return: (Number of leaves in a binary tree)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		node += 1;
	node += binary_tree_nodes(tree->left);
	node += binary_tree_nodes(tree->right);
	return (node);
}
