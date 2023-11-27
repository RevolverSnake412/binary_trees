#include "binary_trees.h"

/**
 * binary_tree_inorder - uses in-order traversal concept.
 * @tree: start point of a tree.
 * @func: function to be used (accepts only values of nodes)
 *
 * Description:
 * This function goes through a binary tree and calls
 * a function for each node until the whole tree has
 * being covered, it will terminate automatically at
 * the end. (function must only have one parameter).
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
