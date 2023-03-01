#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the height of the tree
 * @tree: target
 * Return: 1 on success
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
