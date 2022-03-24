#include "main.h"
#include <stdio.h>

/**
 * reverse_array - resets variable to 98
 * @a: arr
 * @n: number
 *
 * Description: do my stuff
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int j;
for (j = 0; j < n / 2; j++)
{
int temp = arr[j];
a[j] = a[n - j - 1];
a[n - j - 1] = temp;
}
}
