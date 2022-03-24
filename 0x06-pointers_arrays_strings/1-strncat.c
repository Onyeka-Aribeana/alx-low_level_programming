#include "main.h"
#include <stdio.h>

/**
 * _strncat - return length of string
 * @src: char array
 * @dest: an array
 * @n: number
 *
 * Description: do stuff
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, u, j;
u = 0;
j = 0;
while (dest[u] != '\0')
{
u++;
}
while (src[j] != '\0')
{
j++;
}
if (n > j)
{
n = j;
}
for (i = 0; i < n; i++)
{
dest[u + i] = src[i];
}
dest[u + i] = '\0';
return (dest);
}
