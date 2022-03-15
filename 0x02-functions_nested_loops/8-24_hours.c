#include <stdio.h>
#include "main.h"
void jack_bauer(void);
/**
 * jack_bauer - prints time
 *
 * Description: does my stuff
 */
void jack_bauer(void)
{
int i, j, l, m, a, b;
for (i = 48; i <= 50; i++)
{
if (i < 50)
{
a = 57;
}
else
{
a = 51;
}
for (j = 48; j <= a; j++)
{
for (l = 48; l <= 54; l++)
{
if (l == 54)
{
b = 48;
}
else
{
b = 57;
}
for (m = 48; m <= b; m++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(l);
_putchar(m);
_putchar('\n');
}
}
}
}
}
