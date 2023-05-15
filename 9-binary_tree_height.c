#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	
	if (tree)
	{
		left_height = tree->left + binary_tree_height(tree->left);
		right_height = tree->right + binary_tree_height(tree->right);
		return (left_height > right_height ? left_heigh : right_height);
	}
	return (0);
