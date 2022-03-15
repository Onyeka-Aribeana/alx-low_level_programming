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
_putchar(i);
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
_putchar(j);
_putchar(':');
for (k = 48; k <= 54; k++)
{
_putchar(k);
if (k == 54)
{
b = 48;
}
else
{
b = 57;
}
for (l = 48; l <= b; l++)
{
_putchar(l);
_putchar('\n');
}
}
}
}
}
