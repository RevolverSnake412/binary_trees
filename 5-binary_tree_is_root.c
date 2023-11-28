#include "binary_trees.h"

/**
 * binary_tree_is_root - Verifies if a node is root.
 * @node: the node in question.
 *
 * Return: 0 if node is NULL or not a root node, otherwise 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
