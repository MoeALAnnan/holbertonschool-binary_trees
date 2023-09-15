#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes all nodes in the tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* If the tree is NULL, return immediately. */
	if (!tree)
		return;

	/* Recursively delete the left subtree. */
	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}

	/* Recursively delete the right subtree. */
	if (tree->right)
	{
		binary_tree_delete(tree->right);
	}

	/* Free the current node. */
	free(tree);
}
