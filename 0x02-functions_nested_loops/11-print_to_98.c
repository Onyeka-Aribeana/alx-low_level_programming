#include <stdio.h>
#include "main.h"
void print_to_98(int);
/**
 * print_to_98 - prints from number to 98
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
else if (n == 98)
{
printf("%d\n", n);
}
else
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
}
