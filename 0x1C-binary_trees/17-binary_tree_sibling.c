#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node whose uncle will be found
 * Return: pointer to uncle node, or NULL if node is NULL or there is no uncle
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if ((node == node->parent->left) && (node->parent->right != NULL))
		return (node->parent->right);
	else if ((node == node->parent->right) && (node->parent->left != NULL))
		return (node->parent->left);
	else
		return (NULL);
}
