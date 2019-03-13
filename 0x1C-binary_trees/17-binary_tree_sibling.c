#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node whose uncle will be found
 * Return: pointer to uncle node, or NULL if node is NULL or there is no uncle
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;
	binary_tree_t *parent = NULL;
	
	if ((node != NULL) && (node->parent != NULL))
	{
		parent = node->parent;
		if ((node == parent->left) && (parent->right != NULL))
			sibling = parent->right;
		else if ((node == parent->right) && (parent->left != NULL))
			sibling = parent->left;
	}
	return (sibling);
}
