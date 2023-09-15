#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_root(const binary_tree_t *node)
{   /* If the node has no parent, it is a root */
	if (node && node->parent == NULL)
		return (1);
	/* If it has a parent or is NULL, it is not a root */
	return (0);
}
