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
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert the left-child in
 * @value: value to store in the left-child
 * Return: pointer to newly created left-child node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;
	binary_tree_t *left_grandchild;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = left_child;
	else
	{
		left_grandchild = parent->left;
		parent->left = left_child;
		left_child->left = left_grandchild;
		left_grandchild->parent = left_child;
	}
	return (left_child);
}
