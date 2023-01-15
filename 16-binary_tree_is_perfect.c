#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: pointer to the root node of the tree to check
*
*Return: if tree is NULL return 0;
*/


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

	return (0);
}

