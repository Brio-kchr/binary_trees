#include "binary_trees.h"


/**
 * *binary_tree_node - function thats creates a binary tree node
 * @parent: pointer to root node
 * @value : value to be stored inthe node
 * Return: return pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;
	return (n_node);
}
