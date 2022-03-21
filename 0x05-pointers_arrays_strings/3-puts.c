#include "main.h"
#include <stdio.h>

/**
 * _puts - return length of string
 * @str: char array
 *
 * Description: do stuff
 * Return: Always 0.
 */
void _puts(char *str)
{
int u;
u = 0;
while (str[u] != '\0')
{
_putchar(str[u]);
u++;
}
_putchar('\n');
return (u);
}
