#include <stdio.h>
#include "main.h"

/**
 * print_numbers - checks for uppercase letters
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void print_numbers(void)
{
int n;
for (n = 48; n <= 57; n++)
{
if (n != 50 || n != 52)
{
_putchar(n);
}
}
_putchar('\n');
}
