#include "binary_trees.h"

/**
 * binary_tree_height - creat a node
 *
 * @tree: root node
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	if (r >= l)
	{
		return (r);
	}
	else
	{
		return (l);
	}
}
