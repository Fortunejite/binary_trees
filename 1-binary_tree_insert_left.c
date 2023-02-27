#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at the left of the tree
 * @parent: the parent of the tree
 * @value: value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t *));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	if (parent == NULL)
		return (new);
	new->parent = parent;
	if (parent->left == NULL)
		return (new);
	new->left = parent->left;
	parent->left->parent = new;
	return (new);
}
