#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0 if the tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_c = 0, right_c = 0;

	if (!tree)
	{
		return (0);
	}

	left_c = binary_tree_height(tree->left);
	right_c = binary_tree_height(tree->right);

	return (left_c - right_c);
}
