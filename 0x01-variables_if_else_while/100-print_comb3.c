#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i < 57; i++)
{
j = i + 1;
while (j <= 57)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
{
break;
}
putchar(44);
putchar(32);
j = j + 1;
}
}
putchar('\n');
return (0);
}
