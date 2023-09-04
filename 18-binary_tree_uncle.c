#include "binary_trees.h"

binary_tree_t *sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - Main function to find the uncle of a node in a binary tree
 * @node: node to find uncle for
 * Return: (pointer to uncle node)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (_sibling(node->parent));
}

/**
 * sibling - main funtion get the sibling node to find uncle
 * @node: a point to get sibling from
 * Return: sibling  node
 */
binary_tree_t *_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
