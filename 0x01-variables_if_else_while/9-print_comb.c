#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch < '9')
{
putchar(44);
putchar(10);
}
}
putchar('\n');
return (0);
}
