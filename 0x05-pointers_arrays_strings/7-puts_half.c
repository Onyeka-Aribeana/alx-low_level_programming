#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half of string
 * @str: char array
 *
 * Description: do stuff
 * Return: Always 0.
 */
void puts_half(char *str)
{
int x, u, n;
u = 0;
while (str[u] != '\0')
{
u++;
}
if (u % 2 == 1)
{
n = (u / 2) + 1;
}
else
{
n = u / 2;
}
for (x = n; x < u; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
