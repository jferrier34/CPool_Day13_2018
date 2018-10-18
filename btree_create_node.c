/*
** EPITECH PROJECT, 2018
** btree_create_node.c
** File description:
** Task01
*/

#include<stdlib.h>
#include"../include/btree.h"

btree_t *btree_create_node(void *item)
{
    t_btree *btree;
    btree = NULL;

    btree = (t_btree*)malloc(sizeof(t_btree));

    if (btree != NULL) {
	btree->left = NULL;
        btree->right = NULL;
	btree->item = item;
    }
    return (btree);
}
