#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the binary tree.
 *
 * Return: 1 if `tree` is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If `tree` is NULL, it's not a full tree. */
	if (!tree)
		return (0);

	/* If the current node has no children, it's a leaf, which is full. */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are full. */
	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);

	return (0);
}

