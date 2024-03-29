#include "binary_trees.h"

/**
 * binary_tree_size - creat a node
 *
 * @tree: root node
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (tree == NULL)
	{
		return (0);
	}
	s += binary_tree_size(tree->right);
	s += binary_tree_size(tree->left);
	return (s);
}
