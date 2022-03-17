#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void more_numbers(void)
{
int n, p, m = 57;
char c = '';
for (p = 0; p < 2; p++)
{
_putchar(c);
for (n = 48; n <= m; n++)
{
_putchar(n);
if (n == 57)
{
m = 52;
c = '1';
}
}
}
_putchar('\n');
}
