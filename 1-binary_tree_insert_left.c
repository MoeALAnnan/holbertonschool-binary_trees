#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child of another node
 * @parent: pointer of a parent
 * @value: value of the node inserted
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* Declare pointers for the new node and existing left child */
	binary_tree_t *leftNode = NULL, *node = NULL;

	/* Check if parent is NULL, cannot insert */
	if (!parent)
		return (NULL);

	/* Create a new node with the specified value and parent */
	leftNode = binary_tree_node(parent, value);

	/* If leftNode was successfully created */
	if (leftNode)
	{
		/* Get the current left child of the parent */
		node = parent->left;

		/* If there is an existing left child */
		if (node)
		{
			/*
			 * Update parent pointers:
			 * 1. Make the new node the parent of the existing left child.
			 * 2. Set the existing left child as the left child of the new node.
			 * 3. Set the new node as the left child of the parent.
			 */
			node->parent = leftNode;
			leftNode->left = node;
			parent->left = leftNode;
		}
		else
		{
			/* If no existing left child, set the parent's left child */
			parent->left = leftNode;
		}
	}

	/* Return the newly inserted node or NULL if insertion failed */
	return (leftNode);
}
