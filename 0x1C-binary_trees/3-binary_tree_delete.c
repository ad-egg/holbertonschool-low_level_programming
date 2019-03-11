#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_child;
	binary_tree_t *right_child;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			left_child = tree->left;
			left_child->parent = NULL;
			tree->left = NULL;
			binary_tree_delete(left_child);
		}
		if (tree->right != NULL)
		{
			right_child = tree->right;
			right_child->parent = NULL;
			tree->right = NULL;
			binary_tree_delete(right_child);
		}
		free(tree);
	}
}
