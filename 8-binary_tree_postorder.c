#include "binary_trees.h"


/**
 * binary_tree_postorder - function that goes thru a binary tree
 * using post-order traversal.
 * @tree: pointer to root node of tree to trverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
