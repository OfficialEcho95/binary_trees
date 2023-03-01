#include <stdio.h>
#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function to find the balance factor of a tree;
 * @tree: a pointer to the root node of tree
 * Return: returns the calculated balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
