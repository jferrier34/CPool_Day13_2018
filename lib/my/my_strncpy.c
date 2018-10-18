/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
	dest[i] = src[i];
	i++;
    }
    return (dest);
}
