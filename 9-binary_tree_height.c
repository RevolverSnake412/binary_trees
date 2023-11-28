#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: the root node to start with.
 *
 * Return: The height of a root node on success, otherwise 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t theight = 0, rheight = 0, max;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		theight = binary_tree_height(tree->left);
		theight++;
	}

	if (tree->right)
	{
		rheight = binary_tree_height(tree->right);
		rheight++;
	}

	max = theight;

	if (rheight > max)
		max = rheight;

	return (max);
}
