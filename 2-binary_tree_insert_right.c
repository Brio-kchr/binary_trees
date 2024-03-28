#include "binary_trees.h"


/**
 * *binary_tree_insert_right - function inserts a node as the right child
 * of another node
 * @parent: pointer to root node
 * @value : value to be stored inthe node
 * Return: return pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		temp_node = parent->right;

		parent->right = binary_tree_node(parent, value);
		(parent->right)->right = temp_node;
		temp_node->parent = parent->right;
		return (parent->right);
	}
}
