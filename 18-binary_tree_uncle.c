#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - Searches the uncle of a node.
 * @node: the node in question.
 *
 * Return: the uncle node if found, otherwise NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);

	return (uncle);
}

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

	if (node->parent->left == node)
		return (node->parent->right ? node->parent->right : NULL);

	if (node->parent->right == node)
		return (node->parent->left ? node->parent->left : NULL);

	return (NULL);
}
