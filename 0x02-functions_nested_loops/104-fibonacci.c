#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int i = 1, j = 2, k, m;
printf("%lu, ", i);
printf("%lu, ", j);
for (k = 0; k < 96; k++)
{
m = j;
j = j + i;
i = m;
if (k < 47)
{
printf("%lu, ", j);
}
else
{
printf("%lu\n", j);
}
}
return (0);
}
