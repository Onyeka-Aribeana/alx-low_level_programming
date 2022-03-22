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
 char *a, *z, c;
u = 0;
while (s[u] != '\0')
{
u++;
}
a = s;
z = s;
for (x = u - 1; x >= 0; x--)
{
d[i] = s[x];
i++;
}
d[u] = '\0';
*s = *d;
}
