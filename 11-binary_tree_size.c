#include "binary_trees.h"

/**
 * binary_tree_size - mmeasures the size of a binary tree
 * @tree: pointer to the node.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	
	if (tree)
	{
		size += 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (size);
}
