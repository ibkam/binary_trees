#include "binary_trees.h"
/**
 * binary_tree_is_full - a function to check if binary tree is full
 * @tree: the root node
 *
 * Return: 1 if full and 0 if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	}
	return (0);
}
