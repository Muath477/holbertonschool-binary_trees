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
 * is_perfect_recursive - checks if a tree is perfect at a given depth
 * @tree: pointer to the root node of the tree to check
 * @height: height of the whole tree
 * @depth: current depth of tree in the recursion
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect_recursive(const binary_tree_t *tree,
		int height, int depth)
{
	if (tree->left == NULL && tree->right == NULL)
		return (height == depth);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, height, depth + 1) &&
			is_perfect_recursive(tree->right, height, depth + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect_recursive(tree, tree_height(tree), 0));
}
