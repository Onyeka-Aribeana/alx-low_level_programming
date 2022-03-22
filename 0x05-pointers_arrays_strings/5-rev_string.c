#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse string
 * @s: char array
 *
 * Description: do stuff
 * Return: Always 0.
 */
void print_rev(char *s)
{
int x, u, i;
i = 0;
char *d = "";
u = 0;
while (s[u] != '\0')
{
u++;
}
for (x = u - 1; x >= 0; x--)
{
d[i] = s[x];
i++;
}
d[u] = '\0';
*s = *d;
}
