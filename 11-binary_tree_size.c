#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the binary tree.
 *
 * Return: The size of the tree plus one.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	/* If the tree is empty, it has no size. */
	if (!tree)
		return (0);

	/* Recursively calculate the size of the left subtree. */
	if (tree->left)
		size += binary_tree_size(tree->left);

	/* Recursively calculate the size of the right subtree. */
	if (tree->right)
		size += binary_tree_size(tree->right);

	/* Add one to account for the current node. */
	return (size + 1);
}
