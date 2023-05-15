#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	
	if (tree)
	{
		l = tree->left + binary_tree_height(tree->left);
		r = tree->right + binary_tree_height(tree->right);
		return (l > r ? l : r);
	}
	return (0);
