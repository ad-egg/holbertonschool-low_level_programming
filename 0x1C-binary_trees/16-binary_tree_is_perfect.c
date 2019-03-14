#include "binary_trees.h"

/**
 * _pow - raises base to the power of exp
 * @base: base number
 * @exp: power to be raised to of base number
 * Return: math answer
 */
long int _pow(int base, int exp)
{
	int up;
	long int ans;

	ans = base;
	for (up = 0; up < exp; up++)
		ans = ans * base;
	return (ans);
}

/**
 * bin_tree_h - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree, or 0 if tree is NULL
 */
unsigned int bin_tree_h(const binary_tree_t *tree)
{
	unsigned int rh = 0;
	unsigned int lh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lh = bin_tree_h(tree->left) + 1;
	if (tree->right != NULL)
		rh = bin_tree_h(tree->right) + 1;
	if (lh > rh)
		return (lh);
	else
		return (rh);
}

/**
 * bin_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree, or 0 if tree is NULL
 */
unsigned int bin_tree_size(const binary_tree_t *tree)
{
	unsigned int num_nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			num_nodes += bin_tree_size(tree->left);
		if (tree->right != NULL)
			num_nodes += bin_tree_size(tree->right);
		return (num_nodes + 1);
	}
	else
		return (num_nodes);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree
 * Return: 1 if tree is perfect, 0 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int height = 0;
	unsigned int num_nodes = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	height = bin_tree_h(tree);
	num_nodes = bin_tree_size(tree);
	if (num_nodes == _pow(2, height) - 1)
		return (1);
	else
		return (0);
}
