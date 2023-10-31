#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->right = binary_tree_node(root, 128);
    root->right->right = binary_tree_node(root->right, 402);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    printf("\n");

    root->right->right = binary_tree_node(root->right, 450);
    root->right->left = binary_tree_node(root->right, 420);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    return (0);
}
