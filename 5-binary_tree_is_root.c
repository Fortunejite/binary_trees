#include "binary_trees.h"

/**
 * binary_tree_is_root - Is root or not
 * @node: target
 * Return: 1 on success therwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
