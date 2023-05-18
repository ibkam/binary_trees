#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the node.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Leaves = 0;
	if (tree)
	{
		Leaves += ((!tree->left || !tree->right) + 1 : 0);
		Leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->left);
	}
	return (Leaves);
}
