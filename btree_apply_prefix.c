/*
** EPITECH PROJECT, 2018
** btree_apply_prefix.c
** File description:
** Task02
*/
#include<stdlib.h>
#include"include/btree.h"

void btree_apply_prefix (btree_t *root, int (*applyf)(void *));
{
    if (root == NULL) {
        (*applyf)(root->item)
        btree_apply_prefix(root->left, applyf);
        btree_apply_prefix(root->right, applyf);
    }
    return;
}
