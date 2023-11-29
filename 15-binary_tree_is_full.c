#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
int _pow(int base, int exponent);

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: the root node to check.
 *
 * Return: 1 if full. Otherwise 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int expected_size = 0, i = 0;
	int height = binary_tree_height(tree);
	int size = binary_tree_size(tree);

	if (!tree)
		return (0);

	for (; i <= height; i++)
		expected_size += _pow(2, i);

	if (expected_size != size)
		return (0);
	return (1);
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

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: entry point of a binary tree considered as root node.
 *
 * Return: the size of the binary tree on success. Otherwise 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size);
}

/**
 * _pow - Raises a base to an exponent.
 * @base: The base to raise.
 * @exponent: The exponent to raise to.
 *
 * Return: The base raised to the exponent.
*/
int _pow(int base, int exponent)
{
	int i = 1;
	int sum = 1;

	for (; i <= exponent; i++)
		sum *= base;

	return (sum);
}
