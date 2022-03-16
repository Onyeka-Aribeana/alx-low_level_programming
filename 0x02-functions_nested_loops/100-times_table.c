#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints absolute of number
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_times_table(int n)
{
  int i, j, k;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j != n)
{
k = j + 1;
printf("%d", i * j);
if (i * k < 1)
{
printf(",   ");
}
else if (i * k >= 10)
{
printf(",  ");
}
else if (i * k >= 100)
{
printf(", ");
}
}
else
{
printf("%d\n", i * j);
}
}
}
}
}
