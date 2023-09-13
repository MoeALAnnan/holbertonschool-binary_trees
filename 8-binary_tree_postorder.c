#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using postorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	/* Traverse the left subtree in postorder */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree in postorder */
	binary_tree_postorder(tree->right, func);

	func(tree->n); /* Apply the function to the current node */
}
