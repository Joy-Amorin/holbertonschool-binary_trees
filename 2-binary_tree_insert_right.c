#include "binary_trees.h"
/**
*binary_tree_insert_right - insert a node as the right-child of another node
*@parent: pointer to the node to inert right-child in
*@value: value to store in the new node
*
*Return: pointer to new node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
		new_node->left = NULL;
		new_node->parent = parent;
		new_node->n = value;
		parent->right = new_node;
	}
	else
	{
		new_node->n = value;
		parent->right = new_node;
		new_node->right = NULL;
		new_node->left = NULL;
		new_node->parent = parent;
	}
		return (new_node);
}
