#include "binary_trees.h"

/**
*binary_tree_node - create a binatry tree node
*@parent: pointer to the parent node of the new node
*@value: value the new node
*
*Return: a pointer to new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/* assigns the value to be stored by the new node */

	if (new_node == NULL) /* checks if the new node does not exist */
	{
		return (NULL); /* in that case it returns null */
	}

	/* assignment of all values of the new node */

	new_node->parent = parent; /* assigns the parent */
	new_node->n = value; /* assigns the value to be stored by the new node */
	new_node->left = NULL; /* assigns the left-child of the new node */
	new_node->right = NULL; /* assigns the right-child of the new node */

	return (new_node);
}
