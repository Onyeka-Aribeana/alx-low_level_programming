#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Description: does my stuff
 *
 */
void print_alphabet(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
