#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Is leat or not
 * @node: target
 * Return: 1 on success therwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
