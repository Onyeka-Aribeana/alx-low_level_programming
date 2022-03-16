#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i = 1, j = 2, k = 0, m;
while (i)
{
m = j;
j = j + i;
i = m;
if (j >= 4000000)
{
break;
}
else
{
if (j % 2 == 0)
{
k = k + j;
}
}
}
printf("%ld\n", k + 2);
return (0);
}
