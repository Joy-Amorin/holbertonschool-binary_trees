#include "binary_trees.h"
/**
*binary_tree_insert_left - insert a node as the left-child of another node
*@parent: pointer to the node to inert left-child in
*@value: value to store in the new node
*
*Return: pointer to new node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
	{
		free(newnode);
		return (NULL);
	}

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
		new_node->right = NULL;
		new_node->parent = parent;
		new_node->n = value;
		parent->left = new_node;
	}
	else
	{
		new_node->n = value;
		parent->left = new_node;
		new_node->right = NULL;
		new_node->left = NULL;
		new_node->parent = parent;
	}
		return (new_node);
}
