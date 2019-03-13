#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree, or 0 if tree is NULL
 */
long int _binary_tree_height(const binary_tree_t *tree)
{
	long int rh = 0;
	long int lh = 0;

	if (tree == NULL)	
		return (0);
	if (tree->left != NULL)
		lh = _binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rh = _binary_tree_height(tree->right) + 1;
	if (lh > rh)
		return (lh);
	else
		return (rh);
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
	else
	{
		printf("height of tree->left: %li\n", _binary_tree_height(tree->left));
		printf("height of tree->right: %li\n", _binary_tree_height(tree->right));
		return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
	}
}
