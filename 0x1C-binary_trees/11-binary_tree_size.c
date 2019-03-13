#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			num_nodes += binary_tree_size(tree->left);
		if (tree->right != NULL)
			num_nodes += binary_tree_size(tree->right);
		return (num_nodes + 1);
	}
	else
		return (num_nodes);
}
