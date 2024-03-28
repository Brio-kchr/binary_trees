#include "binary_trees.h"

#define __MAX(a, b)		(((a) >= (b)) ? (a) : (b))

/**
 * binary_tree_depth - function that measures the depth of
 * a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
