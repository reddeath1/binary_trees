#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 * Return: 1 if binary tree is perfect or 0 in otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
