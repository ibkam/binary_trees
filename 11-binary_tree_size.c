#include "binary_trees.h"

/**
 * binary_tree_size - mmeasures the size of a binary tree
 * @tree: pointer to the node.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_size(tree-.parent) : 0 );
}
