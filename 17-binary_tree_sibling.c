#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling - function that finds sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
		return (node->parent->right);
}
