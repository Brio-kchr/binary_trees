#include "binary_trees.h"


/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: pointer to check if node
 * Return: return 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
	{
		return (0);
	}
	return (1);
}
