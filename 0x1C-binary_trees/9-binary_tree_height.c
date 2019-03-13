#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)	
		return (0);
	if ((1 + _binary_tree_height(tree->left)) > (1 + _binary_tree_height(tree->right)))
		return (1 + _binary_tree_height(tree->left));
	else
		return (1 + _binary_tree_height(tree->right));
}
