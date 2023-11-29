#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: the root node.
 *
 * Return: measured balance factor on success. Otherwise 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (0);

	if (tree->left)
		lheight = binary_tree_height(tree->left);
	else
		lheight = -1;

	if (tree->right)
		rheight = binary_tree_height(tree->right);
	else
		rheight = -1;

	return (lheight - rheight);
}

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: the root node to start with.
 *
 * Return: The height of a root node on success, otherwise 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0, max;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		lheight = binary_tree_height(tree->left);
		lheight++;
	}

	if (tree->right)
	{
		rheight = binary_tree_height(tree->right);
		rheight++;
	}

	max = lheight;

	if (rheight > max)
		max = rheight;

	return (max);
}
