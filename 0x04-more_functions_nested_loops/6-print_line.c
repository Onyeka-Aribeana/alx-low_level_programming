#include <stdio.h>
#include "main.h"

/**
 * print_line - print n lines
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; n++)
{
_putchar('_');
}
}
_putchar('\n');
}
