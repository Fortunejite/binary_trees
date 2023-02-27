#include "binary_trees.h"

/**
 * binary_tree_node - Crayes a node
 * @parent: parent of the node
 * @value: value of node
 *
 * Return: The new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t *));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	if (parent == NULL)
		return (new);
	new->parent = parent;
	return (new);
}
