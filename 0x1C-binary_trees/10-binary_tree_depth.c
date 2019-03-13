#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node to measure the depth
 * Return: depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;
	const binary_tree_t *current;

	if (tree != NULL)
	{
		current = tree;
		for (; current->parent != NULL; current = current->parent)
			d++;
	}
	return (d);
}
