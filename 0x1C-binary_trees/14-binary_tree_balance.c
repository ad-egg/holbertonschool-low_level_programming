#include "binary_trees.h"

/**
 * _bin_tree_h - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree, or 0 if tree is NULL
 */
long int _bin_tree_h(const binary_tree_t *tree)
{
	if (tree == NULL)	
		return (0);
	if ((1 + _bin_tree_h(tree->left)) > (1 + _bin_tree_h(tree->right)))
		return (1 + _bin_tree_h(tree->left));
	else
		return (1 + _bin_tree_h(tree->right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree
 * Return: balance factor of tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_bin_tree_h(tree->left) - _bin_tree_h(tree->right));
}
