#include "binary_trees.h"


/**
 * *binary_tree_insert_left - function inserts a node as the left child
 * of another node
 * @parent: pointer to root node
 * @value : value to be stored inthe node
 * Return: return pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		temp_node = parent->left;

		parent->left = binary_tree_node(parent, value);
		(parent->left)->left = temp_node;
		temp_node->parent = parent->left;
		return (parent->left);
	}
}
