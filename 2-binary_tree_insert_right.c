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
	binary_tree_t *new_node = NULL; /* creates the new node*/

	if (!parent) /* checks if parents exists */
		return (NULL);

	new_node = binary_tree_node(parent, value);
	/* assign new node parent and value */

	if (!new_node) /* if the assignment of new node fails, returns null */
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	/**
	 * if the parent already has a right child,
	 * reassigns the hierarchy accordingly
	 */

	parent->right = new_node; /* change the right-child of parent to new node */

	return (new_node);
}
