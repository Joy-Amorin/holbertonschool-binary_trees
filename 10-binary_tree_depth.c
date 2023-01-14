#include "binary_trees.h"
/**
 * binary_tree_depth - measures the deepth of a node in a binary tree
 * @tree: a pointer to node to measure hte depth
 * Return: deep the node, 0 if tree is null or doesn´t have deepth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->parent)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
