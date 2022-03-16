#include <stdio.h>
#include "main.h"
int print_last_digit(int);
/**
 * print_last_digit - prints absolute of number
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
n = n * -1;
}
n = n - 2;
i = n % 10;
_putchar(48 + (i + 2));
return (i + 2);
}
