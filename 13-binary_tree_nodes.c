#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes that have at least 1 child.
 * @tree: the root node of a binary tree.
 *
 * Return: Total of nodes with least of 1 child on success. Otherwise 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += (binary_tree_nodes(tree->left));
	nodes += (binary_tree_nodes(tree->right));
	nodes += (tree->left || tree->right) ? 1 : 0;

	return (nodes);
}
