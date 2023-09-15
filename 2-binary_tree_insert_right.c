#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node for which to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL, has no parent,
 *         or the parent has no sibling (uncle).
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	/* Check if the node is NULL, or if it has no parent,*/
    /* or if the parent has no parent. */
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* Get references to the parent and grandparent nodes for convenience. */
	parent = node->parent;
	grandparent = node->parent->parent;

	/* Check if the parent of the node is the left child of its grandparent,*/
    /* and return the right child of the grandparent (uncle). */
	if (grandparent->left == parent)
		return (grandparent->right);
	/* Otherwise, return the left child of the grandparent (uncle). */
return (grandparent->left);
}
