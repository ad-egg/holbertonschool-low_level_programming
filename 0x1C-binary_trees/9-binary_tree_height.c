#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rh = 0;
	size_t lh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rh = binary_tree_height(tree->right) + 1;
	if (lh > rh)
		return (lh);
	else
		return (rh);
}
