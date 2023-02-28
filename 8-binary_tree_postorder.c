#include "binary_trees.h"

/**
 * binary_tree_inorder - transverase through a tree
 * @func: the function
 * @tree: the target
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
