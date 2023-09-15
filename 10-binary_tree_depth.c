
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: 0 if `tree` is NULL or if it has no parent, otherwise the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If `tree` is NULL, it has no depth, return 0 */
	if (tree == NULL)
		return (0);

	/* If `tree` has no parent, it's at depth 0 */
	if (!tree->parent)
		return (0);

	/* Recursively call binary_tree_depth on the parent, incrementing depth */
	return (binary_tree_depth(tree->parent) + 1);
}
