#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0, j;
for (j = 0; j < 1024; j++)
{
if (j % 3 == 0 || j % 5 == 0)
{
i = i + j;
}
}
printf("%d\n", i);
return (0);
}
