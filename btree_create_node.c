/*
** EPITECH PROJECT, 2018
** btree_create_node.c
** File description:
** Task01
*/

#include<stdlib.h>
#include"include/btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *btree;
    btree = NULL;

    btree = malloc(sizeof(*btree));

    if (btree == NULL) {
        btree->left = NULL;
        btree->right = NULL;
        btree->item = item;
    }
    return (btree);
}
