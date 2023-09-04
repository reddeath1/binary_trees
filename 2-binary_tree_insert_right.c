#include "binary_trees.h"

/**
 * binary_tree_insert_right - A main function that inserts a node as the left-child.
 * @parent: pointer to a node to insert the left child in.
 * @value: value to store in the node.
 * Return: (pointer to created node or NULL on failure.)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
