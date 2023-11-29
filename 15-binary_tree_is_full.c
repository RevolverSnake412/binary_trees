#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: the root node to check.
 *
 * Return: 1 if full. Otherwise 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (!tree)
		return (0);

	if (tree->left)
		check = binary_tree_is_full(tree->left);

	if (check == 0)
		return (0);

	if (tree->right)
		check = binary_tree_is_full(tree->right);

	if (check == 0)
		return (0);

	if (binary_tree_is_leaf(tree) == 1
	|| (tree->left && tree->right))
		return (1);

	return (0);
}

/**
 * binary_tree_is_leaf - Verifies if a node is leaf.
 * @node: the node in question.
 *
 * Return: 0 if node is NULL or not a leaf, otherwise 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
