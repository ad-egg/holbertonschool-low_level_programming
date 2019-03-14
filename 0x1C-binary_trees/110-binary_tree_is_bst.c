#include "binary_trees.h"

/**
 * is_bst_recur - recursively checks that the values in a binary tree are
 * in order
 * @tree: pointer to root node of tree to be checked
 * @min: minimum value that should stored in tree node
 * @max: maximum value that should be stored in tree node
 * Return: 1 if binary tree is a binary search tree, 0 if not
 */
int is_bst_recur(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if ((tree->n <= min) || (tree->n >= max))
		return (0);
	return (is_bst_recur(tree->left, min, tree->n + 1) &&
			is_bst_recur(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if binary tree is a valid binary search tree
 * @tree: pointer to root node of tree to be checked
 * Return: 1 if tree is a valid BST, 0 if otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_recur(tree, INT_MIN, INT_MAX));
}
