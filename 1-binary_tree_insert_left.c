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

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
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
