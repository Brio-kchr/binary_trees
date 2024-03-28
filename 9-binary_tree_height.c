#include "binary_trees.h"

#define __MAX(a, b)		(((a) >= (b)) ? (a) : (b))

/**
 * binary_tree_height - function that measures the height of
 * a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		return (1 +
			__MAX(
				binary_tree_height(tree->left),
				binary_tree_height(tree->right)
				)
		       );
	}
	return (0);
}
