#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet()
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
