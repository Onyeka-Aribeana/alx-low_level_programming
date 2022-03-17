#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 * @size: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_triangle(int size)
{
int i, j, k = 1, m;
if (size > 0)
{
for (j = 0; j < size; j++)
{
for (i = size; i > k; i--)
{
_putchar(' ');
}
for (m = 0; m < k; m++)
{
_putchar('#');
}
k += 1;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
