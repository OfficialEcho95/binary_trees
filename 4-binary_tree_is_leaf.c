#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checking if tree is leaf
 *@node: node to check if leaf
 * Return: return 0 on failure and 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
