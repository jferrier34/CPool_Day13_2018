/*
** EPITECH PROJECT, 2018
** btree_apply_infix.c
** File description:
** 
*/

#include<stdlib.h>
#include"include/btree.h"

void btree_apply_suffix (btree_t *root, int (*applyf)(void *));
{
    if (root == NULL) {
        btree_apply_suffix(root->left, applyf);
        btree_apply_suffix(root->right, applyf);
	root->item = (*applyf)(root->item);
    }
    return;
}
