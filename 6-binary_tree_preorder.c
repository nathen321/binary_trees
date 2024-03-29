#include "binary_trees.h"

/**
 * binary_tree_preorder - creat a node
 *
 * @tree: root node
 * @func: function cal to print value of node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
