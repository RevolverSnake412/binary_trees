#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: the root node.
 *
 * Return: leaves found (min 1) on success. Otherwise 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves += (tree->left) ? binary_tree_leaves(tree->left) : 0;
	leaves += (tree->right) ? binary_tree_leaves(tree->right) : 0;
	leaves += (!tree->left && !tree->right) ? 1 : 0;

	return (leaves);
}
