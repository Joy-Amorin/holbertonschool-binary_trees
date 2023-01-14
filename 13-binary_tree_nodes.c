#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: the number of nodes or 0 if the tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes = 0, left_nodes = 0, right_nodes = 0;

	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	total_nodes = left_nodes + right_nodes;

	return (1 + total_nodes);
}
