#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes a binary tree
 * @tree: Pointer to the binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
        return; /* If the tree is NULL, return */

    if (tree->left)
    {
        binary_tree_delete(tree->left); /* Recursively delete the left subtree */
    }

    if (tree->right)
        binary_tree_delete(tree->right); /* Recursively delete the right subtree */

    free(tree); /* Free the current node */
}
