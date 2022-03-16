#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
double i = 1, j = 2, k, m;
printf("%d, ", i);
printf("%d, ", j);
for (k = 0; k < 48; k++)
{
m = j;
j = j + i;
i = m;
if (k < 47)
{
printf("%d, ", j);
}
else
{
printf("%d\n", j);
}
}
return (0);
}
