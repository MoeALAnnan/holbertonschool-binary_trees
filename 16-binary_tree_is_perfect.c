#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if `tree` is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_left, tree_right;

	/* If `tree` is NULL, it's not a perfect tree. */
	if (!tree)
		return (0);

	/* If the current node is a leaf, it's considered a perfect tree. */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are perfect. */
	tree_left = binary_tree_is_perfect(tree->left);
	tree_right = binary_tree_is_perfect(tree->right);

	/* While both left and right children exist, check their depths. */
	while (tree->left && tree->right)
	{
		/* Check if the left subtree is deeper than the right subtree. */
		if ((tree->left->left && tree->left->right) &&
			(!tree->right->left && !tree->right->right))
			return (0);

		/* Check if the right subtree is deeper than the left subtree. */
		if ((!tree->left->left && !tree->left->right) &&
			(tree->right->left && tree->right->right))
			return (0);

		return (tree_left && tree_right);
	}

	/* If the left and right subtrees have the same depth, it's perfect. */
	if (tree_left == tree_right)
		return (1);
	else
		return (0);
}

