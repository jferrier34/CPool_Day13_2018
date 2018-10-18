/*
** EPITECH PROJECT, 2018
** btree.h
** File description:
** 
*/

#ifndef BTREE_H_
        #define BETREE_H_

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

btree_t *btree_create_node(void *item);
void btree_apply_infix (btree_t *root, int (*applyf)(void *));
void btree_apply_prefix (btree_t *root, int (*applyf)(void *));
void btree_apply_suffix (btree_t *root, int (*applyf)(void *));

#endif 
