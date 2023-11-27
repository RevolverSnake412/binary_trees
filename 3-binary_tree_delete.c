#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes a whole binary tree.
 * @tree: the target.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root = tree;

	if (!root)
		return;

	if (root->left != NULL)
		binary_tree_delete(root->left);

	if (root->right != NULL)
		binary_tree_delete(root->right);

	free(root);
}
