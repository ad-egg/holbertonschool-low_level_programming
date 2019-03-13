#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 * @tree: pointer to root node of tree
 * Return: number of nodes with children, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	else
		return (1 + (binary_tree_nodes(tree->left)) + (binary_tree_nodes(tree->right)));
}
