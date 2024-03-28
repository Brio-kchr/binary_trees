#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - function that checks if a b tree is full
 * @tree: pointer to root node of tree to measure height
 * Return: whether tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}
