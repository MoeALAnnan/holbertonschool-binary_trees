#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 0 if `tree` is NULL or if it has no children,
 *         otherwise the number of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If `tree` is NULL, it has no nodes with children. */
	if (!tree)
		return (0);

	/* If the current node has at least one child,
	 * increment count and recursively check left and right subtrees.
	 */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}

