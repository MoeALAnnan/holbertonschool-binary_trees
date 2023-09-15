#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node for which to find the sibling.
 *
 * Return: Pointer to the sibling node
 * or NULL if node is NULL or has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node is NULL or if it has no parent. */
	if (!node || !node->parent)
		return (NULL);

	/* If the node's parent's left child is not the node itself*/
	/*  return the left child (sibling).*/

	if ((node->parent->left) != node)
		return (node->parent->left);
	/* Otherwise, return the right child (sibling). */
	return (node->parent->right);
}

