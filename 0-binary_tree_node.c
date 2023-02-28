#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - function to create a node
 *@parent: pointer to root node
 *@value: value at position
 * Return:Your function must return a pointer to the new node or NULL if no.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
