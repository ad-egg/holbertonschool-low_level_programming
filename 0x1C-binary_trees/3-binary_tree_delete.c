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
			tree->left = NULL;
		}
		if (tree->right != NULL)
		{
			right_child = tree->right;
			tree->right = NULL;
		}
		left_child->parent = NULL;
		right_child->parent = NULL;
		free(tree);
		binary_tree_delete(left_child);
		binary_tree_delete(right_child);
	}
}
