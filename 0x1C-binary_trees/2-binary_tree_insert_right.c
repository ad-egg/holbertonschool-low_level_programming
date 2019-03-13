#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in node
 * Return: pointer to newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}

/**
 * binary_tree_insert_right - inserts a node as a right-child of another node
 * @parent: pointer to node that will receive a right-child
 * @value: value to be stored in right-child
 * Return: pointer to right-child or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;
	binary_tree_t *right_grandchild;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = right_child;
	else
	{
		right_grandchild = parent->right;
		parent->right = right_child;
		right_child->right = right_grandchild;
		right_grandchild->parent = right_child;
	}
	return (right_child);
}
