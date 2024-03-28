#include "binary_trees.h"


/**
 * binary_tree_inorder - function that goes thru a binary tree
 * using in-order traversal.
 * @tree: pointer to root node of tree to trverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		(*func)(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
