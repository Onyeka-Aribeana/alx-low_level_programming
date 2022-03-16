#include <stdio.h>
#include "main.h"
/**
 * times_table - prints absolute of number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j != 9)
{
k = j + 1;
printf("%d", i * j);
if (i * k < 10)
{
printf(",   ");
}
else if ((i * k) >= 10 && (i * k) < 100)
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
