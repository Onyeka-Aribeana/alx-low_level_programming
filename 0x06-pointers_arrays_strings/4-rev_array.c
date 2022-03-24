#include "main.h"
#include <stdio.h>

/**
 * reverse_array - resets variable to 98
 * @a: arr
 * @n: arr
 *
 * Description: do my stuff
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, j;
int dest[n];
for (i = 0; i < n; i++)
{
dest[i] = a[i];
}
for (j = 0; j < n; j++)
{
a[j] = dest[n - j - 1];
}
}
