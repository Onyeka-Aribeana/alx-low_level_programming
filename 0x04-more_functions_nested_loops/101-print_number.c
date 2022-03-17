#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
 * print_number - prints in string
 * @n: number
 *
 *
 * Description: does my stuff
 * Return: 1 or 0
 */


void print_number(int n)
{
int i, j, k, l;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
else if (n == 0)
{
_putchar(48);
}
k = log10(n) + 1;
for (i = 0; i < k; i++)
{
j = log10(n) + 1;
if (j < k - i)
{
l = 0;
}
else
{
l = n / pow(10, j - 1);
}
_putchar(l + 48);
n = n - (l *pow(10, j - 1));
}
_putchar('\n');
}
