#include "main.h"
#include <stdio.h>

/**
 * _strncpy - return length of string
 * @src: char array
 * @dest: an array
 * @n: number
 *
 * Description: do stuff
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, u;
u = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
while (dest[u] != '\0')
{
u++;
}
dest[u] = '\0';
return (dest);
}
