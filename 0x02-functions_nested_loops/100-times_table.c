
#include <stdio.h>
#include "main.h"
void print_times_table(int);
/**
 * print_times_table - prints absolute of number
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_times_table(int n)
{
int i, j;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j != n)
{
if (j < 10)
{
printf("%d,   ", i * j);
}
else if (j > 10 && j < 100)
{
printf("%d,  ", i * j);
}
else
{
printf("%d, ", i * j);
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
