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
int x, u;
u = 0;
while (s[u] != '\0')
{
u++;
}
for (x = u - 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
