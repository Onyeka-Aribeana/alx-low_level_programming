#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for uppercase letters
 * @c: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int _isdigit(int c)
{
int n;
if (c >= 48 && c <= 57)
{
n = 1;
}
else
{
n = 0;
}
return (n);
}
