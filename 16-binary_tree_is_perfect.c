#include <stdio.h>
#include "binary_trees.h"
//#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function to check if tree is perfect
 * @tree: a pointer to the root of tree
 * Return: returns zero for perfect and 1 for failure
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
