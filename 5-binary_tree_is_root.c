#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - to check if tree is root
 * @node: pointer to the node
 * Return: returns 0 on failire and 1 on success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL && node->parent != NULL)
		return (0);

	return (1);
}
