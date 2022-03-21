#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 * @s: number
 *
 * Description: do stuff
 * Return: Always 0.
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
