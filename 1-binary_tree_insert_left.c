#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a left child node in the binary tree.
 * @parent: the parent node, NULL if it's the root.
 * @value: the value of the node.
 *
 * Description:
 * This function inserts a left child node in the binary tree. If a left child
 * already exists, it is replaced by the new node, and the existing child
 * becomes the left child of the new node.
 *
 * Return: pointer to the new left child on success, NULL on failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	int flag = 0;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		flag = 1;
	}

	parent->left = binary_tree_node(parent, value);

	if (flag == 1)
	{
		parent->left->left = temp;
		temp->parent = parent->left;
	}

	return (parent->left);
}
