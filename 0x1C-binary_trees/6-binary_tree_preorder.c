#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using pre-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 * @int: value in the node to be called by function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
