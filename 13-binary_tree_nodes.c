#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - function to count number of nodes
 * @tree: tree with nodes to be counted
 * Return: returns the number of counted nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	return (0);
}
