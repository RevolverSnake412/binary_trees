#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new node.
 * @parent: the parent node, NULL if it's the root.
 * @value: the value of the node.
 *
 * Return: returns the new created node on success, NULL on failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));

	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->n = value;
	child->right = child->left = NULL;

	return (child);
}
