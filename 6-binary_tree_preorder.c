#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{   /* If either tree or func is NULL, exit the function */
	if ((tree == NULL) || (func == NULL))
		return;
	/* Apply the function to the current node */
	func(tree->n);

	/* Traverse the left subtree in pre-order */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree in pre-order */
	binary_tree_preorder(tree->right, func);
}
