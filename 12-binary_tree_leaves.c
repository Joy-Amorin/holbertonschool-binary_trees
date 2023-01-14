#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: breadth, the number of leaves or 0 if the tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!binary_tree_leaves(tree->left) && !binary_tree_leaves(tree->right))
		return (1);

	return (binary_tree_leaves(tree->left) + (binary_tree_leaves(tree->right)));
}
