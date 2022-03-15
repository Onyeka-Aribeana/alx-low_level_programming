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
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
