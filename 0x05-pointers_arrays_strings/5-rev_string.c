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
char c;
u = 0;
while (s[u] != '\0')
{
u++;
}
u = u - 1;
for (x = 0; x < u / 2; x--)
{
c = s[i];
s[i] = s[u];
s[u--] = c;
}
}
