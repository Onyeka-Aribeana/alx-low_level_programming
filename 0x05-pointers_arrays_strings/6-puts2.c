#include "main.h"
#include <stdio.h>

/**
 * puts2 - return length of string
 * @str: char array
 *
 * Description: do stuff
 * Return: Always 0.
 */
void puts2(char *str)
{
int u;
u = 0;
while (str[u] != '\0')
{
if (u % 2 == 0)
{
_putchar(str[u]);
}
u++;
}
_putchar('\n');
}
