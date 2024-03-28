#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - function that measures the size of
 * a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
	return (1);
}
