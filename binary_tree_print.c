#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * print_t - Main function to store recursively each level in an array of strings
 * @tree: A Pointer to the node to print
 * @offset: an offset to print
 * @depth: the Depth of the node
 * @s: the Buffer
 * Return: (length of printed tree after process)
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, isleft, i;

	if (!tree)
		return (0);
	is_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && isleft)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !isleft)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * height - function that Measures the height of a binary tree
 *
 * @tree: A Pointer to the node to measures the height
 *
 * Return: (height of the tree starting at node)
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = tree->left ? 1 + height(tree->left) : 0;
	right = tree->right ? 1 + height(tree->right) : 0;
	return (height_l > right ? left : right);
}


/**
 * binary_tree_print - Main function that Prints a binary tree
 * @tree: A Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t heights, i, j;

	if (!tree)
		return;
	height = height(tree);
	s = malloc(sizeof(*s) * (heights + 1));
	if (!s)
		return;
	for (i = 0; i < heights + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < heights + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
