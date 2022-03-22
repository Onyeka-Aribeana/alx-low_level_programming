#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array
 * @n: number
 *
 * Description: do my stuff
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
printf("  ");
}
for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
