#include "binary_trees.h"
/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: binary tree
 * Return: l_height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r_height = binary_tree_height(tree->right) + 1;
	if (l_height < r_height)
		return (r_height);
	return (l_height);
}
