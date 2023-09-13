#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node
 *         NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *rightNode; /* Pointer to the new right node */

    if (parent == NULL)
        return (NULL); /* If parent is NULL, return NULL immediately, cannot insert */

    rightNode = binary_tree_node(parent, value); /* Create a new node with the specified value and parent */

    if (parent->right != NULL)
    {
        /* If there is an existing right child */
        rightNode->right = parent->right; /* Set the existing right child as the right child of the new node */
        (parent->right)->parent = rightNode; /* Update the parent of the existing right child to be the new node */
    }

    parent->right = rightNode; /* Set the parent's right child to be the new node */

    return (rightNode); /* Return the newly created node */
}
