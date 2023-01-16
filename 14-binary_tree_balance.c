#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
*binary_tree_balance -  measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure the balance factor
*
*Return: If tree is NULL, return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)

		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
