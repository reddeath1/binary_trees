#include "binary_trees.h"

/**
 * binary_tree_insert_left - Main function that inserts a node as the left-child.
 * @parent: pointer to a node to insert the left child in.
 * @value: value to store in the node.
 * Return: pointer to to created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
