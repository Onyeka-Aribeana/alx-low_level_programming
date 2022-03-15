#include <stdio.h>
#include "main.h"
int print_sign(int);
/**
 * print_sign - prints sign of number
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int print_sign(int n)
{
int i;
if (n > 0)
{
_putchar('+');
i = 1;
}
else if (n < 0)
{
_putchar("-");
i = -1;
}
else
{
_putchar('0');
i = 0;
}
return (i);
}
