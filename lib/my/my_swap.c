/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Task01
*/

void my_swap(int *a, int *b)
{
    int swap;

    swap = *b;
    *b = *a;
    *a = swap;
}
