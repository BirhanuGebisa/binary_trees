#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: Depth.  If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpt = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	dpt = binary_tree_depth(tree->parent);
	dpt++;
	return (dpt);
}
