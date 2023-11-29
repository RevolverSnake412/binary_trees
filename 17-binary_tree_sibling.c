#include "binary_trees.h"

/**
 * binary_tree_sibling - Searches the sibling of a node.
 * @node: the node in question.
 *
 * Return: the sibling node if found, otherwise NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);

	if (node->parent->right->n == node->n)
		return (node->parent->left);

	return (NULL);
}
