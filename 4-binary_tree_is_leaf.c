#include "binary_trees.h"
#include <stdlib.h>

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
