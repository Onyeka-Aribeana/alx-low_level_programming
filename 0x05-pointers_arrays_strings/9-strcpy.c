#include "main.h"
#include <stdio.h>

/**
 * _strcpy - resets variable to 98
 * @src: arr
 * @dest: arr
 *
 * Description: do my stuff
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
