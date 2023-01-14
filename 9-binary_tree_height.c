#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else if (!tree->left && !tree->right)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		return (1 + binary_tree_height(tree->left));
	}
	return (1 + binary_tree_height(tree->right));
}
