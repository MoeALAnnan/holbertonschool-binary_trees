#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{   /* If either tree or func is NULL, exit the function */
	if (!tree || !func)
		return;

	/* Traverse the left subtree in in-order */
	if (tree->left)
	{
		binary_tree_inorder(tree->left, func);
	}
	/* Apply the function to the current node */
	func(tree->n);

	/* Traverse the right subtree in in-order */
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
