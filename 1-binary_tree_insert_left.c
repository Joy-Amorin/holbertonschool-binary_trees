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
	binary_tree_t *new_node = NULL; /* creates the new node*/

	if (!parent) /* checks if parents exists */
		return (NULL);

	new_node = binary_tree_node(parent, value);
	/* assign new node parent and value */

	if (!new_node) /* if the assignment of new node fails, returns null */
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	/**
	 * if the parent already has a left child,
	 * reassigns the hierarchy accordingly
	 */

	parent->left = new_node; /* change the left-child of parent to new node */

	return (new_node);
}
