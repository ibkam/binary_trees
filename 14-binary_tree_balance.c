#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: If tree is NULL, must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right = 0;
	int height_left = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = (int)binary_tree_height(tree->left);
	if (tree->right)
		height_right = (int)binary_tree_height(tree->right);
	return (height_left - height_right);
}

#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node.
 * Return: 0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right = 0;
	size_t height_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	else
		height_left = 1;
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	else
		height_right = 1;
	if (height_left > height_right)
		return (height_left);
	return (height_right);
}
