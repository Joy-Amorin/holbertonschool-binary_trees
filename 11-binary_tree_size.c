#include "binary_trees.h"
/**
 * binary_tree_size - measures the deepth of a node in a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size the node, 0 if the tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + (binary_tree_size(tree->right)));
}
