#include <stdio.h>
#include "main.h"
int _isalpha(int);
/**
 * _isalpha - checks if char is lowercase
 * @c: char
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int _isalpha(int c)
{
int i;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
