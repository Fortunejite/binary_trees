#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the left of the tree
 * @parent: the parent of the tree
 * @value: value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	new->left = parent->left;
	parent->left->parent = new;
	parent->left = new;
	return (new);
}
