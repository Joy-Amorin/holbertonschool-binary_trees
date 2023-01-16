#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure the balance factor
*
*Return: if tree is NULL, return 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_height(tree->left) == 0 && tree->left)
		{	
			return	(1 + binary_tree_height(tree->left) - binary_tree_height(tree->right));
		}
		if (binary_tree_height(tree->right) == 0 && tree->right)
		{
			return	(binary_tree_height(tree->left) - 1 + binary_tree_height(tree->right));
		}

		return	(binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
