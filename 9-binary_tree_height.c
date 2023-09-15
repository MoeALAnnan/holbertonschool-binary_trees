#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If the tree is empty, there is no height, so return 0. */
	if (!tree)
		return (0);

	/* Calculate the height of the left subtree recursively. */
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	/* Calculate the height of the right subtree recursively. */
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	/* Compare the heights of the left and right subtrees,*/
	/* and return the greater height.*/
	if (left_height < right_height)
		return (right_height);

	return (left_height);
}
