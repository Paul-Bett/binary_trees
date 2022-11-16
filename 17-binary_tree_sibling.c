#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns node sharing a parent
 * @node: A pointer to the child to get siblint.
 *
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
		if (!node || (node->parent == NULL))
				return(NULL);
		if (node->parent->right == node)
				return(node->parent->left);
		else
				return(node->parent->right);
}
