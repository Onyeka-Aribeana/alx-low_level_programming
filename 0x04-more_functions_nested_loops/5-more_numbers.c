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
int n, p, m = 57, c = 0, z;
for (z = 0; z < 10; z++)
{
for (p = 0; p < 2; p++)
{
for (n = 48; n <= m; n++)
{
_putchar(c);
_putchar(n);
if (n == 57)
{
m = 52;
c = 49;
}
}
}
c = 0;
m = 57;
_putchar('\n');
}
}
