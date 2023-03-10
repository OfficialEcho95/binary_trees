#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - function to check the depth of tree
 * @tree: tree to check depth
 * Return: returns the depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	return (depth);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
