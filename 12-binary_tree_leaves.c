#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - function to count the number of leaves of a tree
 *@tree: tree to be counted
 * Return: returns the numbers counted
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
