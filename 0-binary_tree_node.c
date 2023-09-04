#include "binary_trees.h"

/**
 * binary_tree_node - Main function that creates a binary tree node
 * @parent: pointer parent binary trees
 * @value: value of new node
 * Return: (a new node)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (value == '\0')
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
