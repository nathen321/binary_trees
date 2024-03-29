#include "binary_trees.h"

/**
 * binary_tree_postorder - creat a node
 *
 * @tree: root node
 * @func: function cal to print value of node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
