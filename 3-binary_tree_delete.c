#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire tree
 *@tree: tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
