#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int _isupper(int c)
{
int n;
if (c >= 65 && c <= 90)
{
n = 1;
}
else
{
n = 0;
}
return (n);
}
