#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i = 1, j = 2, k, m;
printf("%ld, ", i);
printf("%ld, ", j);
for (k = 0; k < 48; k++)
{
m = j;
j = j + i;
i = m;
if (k < 47)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
}
return (0);
}
