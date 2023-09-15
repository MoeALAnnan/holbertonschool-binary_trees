#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 0 if `tree` is NULL, otherwise the number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* If `tree` is NULL, it has no leaves, return 0. */
	if (tree == NULL)
		return (0);

	/* If `tree` has no children, it's a leaf, return 1. */
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	/* Recursively count the leaves in the left and right subtrees. */
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
