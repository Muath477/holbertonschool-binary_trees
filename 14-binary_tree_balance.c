#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree (helper)
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree, or -1 if tree is NULL
 */
static int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
