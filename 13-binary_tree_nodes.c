#include "binary_trees.h"

/**
 * binary_tree_nodes - creat a node
 *
 * @tree: root node
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		l += 1;
	}
	l += binary_tree_nodes(tree->right);
	l += binary_tree_nodes(tree->left);
	return (l);
}
