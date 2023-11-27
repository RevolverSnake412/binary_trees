#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a right child node in the binary tree.
 * @parent: the parent node, NULL if it's the root.
 * @value: the value of the node.
 *
 * Description:
 * This function inserts a right child node in the binary tree. If a right
 * child already exists, it is replaced by the new node, and the
 * existing child becomes the right child of the new node.
 *
 * Return: pointer to the new right child on success, NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rchild;
	binary_tree_t *temp;
	int flag = 0;

	rchild = malloc(sizeof(binary_tree_t));

	if (rchild == NULL)
		return (NULL);

	rchild->parent = parent;

	if (parent->right != NULL)
	{
		temp = parent->right;
		flag = 1;
	}

	parent->right = rchild;
	rchild->n = value;
	rchild->left = rchild->right = NULL;

	if (flag == 1)
	{
		rchild->right = temp;
		temp->parent = rchild;
	}

	return (rchild);
}
