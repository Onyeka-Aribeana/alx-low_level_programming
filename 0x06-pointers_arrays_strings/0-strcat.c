#include "main.h"
#include <stdio.h>

/**
 * _strcat - return length of string
 * @src: char array
 * @dest: an array
 *
 * Description: do stuff
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, u;
u = 0;
while (dest[u] != '\0')
{
u++;
}
for (i = 0; src[i]; i++)
{
dest[u + i] = src[i];
}
dest[u + i] = '\0';
return (dest);
}
