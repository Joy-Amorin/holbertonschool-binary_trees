#include "binary_trees.h"

/**
*binary_tree_delete - delete an entire binary tree
*@tree: pointer to the root node to delete
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
	}

	free(tree);
}
