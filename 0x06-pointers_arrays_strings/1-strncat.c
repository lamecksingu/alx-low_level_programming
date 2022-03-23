#include "main.h"
#include<string.h>

/**
 * _strncat - a function to concatenate string
 *
 * @dest: a pointer to destination
 * @src: a pointer to a source
 *
 * Return: a pointer to a destination
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = strlen(dest);
    int i;


    for (i = 0 ; i < n && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';


    return dest; }
