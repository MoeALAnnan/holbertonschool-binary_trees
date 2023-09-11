#include <stdlib.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	//Allocate memory for the node
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t))

	// check if memory allocation was successful
	if (new_code == NULL)
		return NULL;

	new_node->n = value;
	new_node->parent = parenti;
	new_node->left = NULL;
	new_node->left = NULL;

	return (new_node)
	
	
}
