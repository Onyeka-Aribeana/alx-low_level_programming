#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
putchar('\n');
}
}
