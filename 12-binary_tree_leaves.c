#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the number of
 * a binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: height of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (1);
}
