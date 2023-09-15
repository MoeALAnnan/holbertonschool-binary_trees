#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode; /* Pointer to the new right node */
	/* If parent is NULL, return NULL immediately, cannot insert */
	if (parent == NULL)
		return (NULL);
	/* Create a new node with the specified value and parent */
	rightNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		/* If there is an existing right child */
		/* Set the existing right child as the right child of the new node */
		rightNode->right = parent->right;
		/* Update the parent of the existing right child to be the new node */
		(parent->right)->parent = rightNode;
	}
	/* Set the parent's right child to be the new node */
	parent->right = rightNode;

	return (rightNode); /* Return the newly created node */
}
