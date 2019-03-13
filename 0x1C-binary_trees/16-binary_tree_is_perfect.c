#include "binary_trees.h"

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
 * is_tree_perf - recursive function that checks if a binary tree is perfct
 * @tree: pointer to root node of tree
 * @index: index of node
 * @num_nodes: number of nodes in binary tree
 * Return: 1 if binary tree is perfect, 0 if not
 */
int is_tree_perf(const binary_tree_t *tree, unsigned int index,
		unsigned int num_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= num_nodes)
		return (0);
	return (is_tree_perf(tree->left, 2 * index + 1, num_nodes) &&
			is_tree_perf(tree->right, 2 * index + 2, num_nodes));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node of tree
 * Return: 1 if tree is perfect, 0 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_tree_perf(tree, 0, bin_tree_size(tree)));
}
