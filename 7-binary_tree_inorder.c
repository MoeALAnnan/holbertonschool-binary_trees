#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return; /* If either tree or func is NULL, exit the function */

    /* Traverse the left subtree in in-order */
    if (tree->left)
    {
        binary_tree_inorder(tree->left, func);
    }

    func(tree->n); /* Apply the function to the current node */

    /* Traverse the right subtree in in-order */
    if (tree->right)
        binary_tree_inorder(tree->right, func);
}
