#include <stdio.h>
#include "main.h"
int _islower(int);
/**
 * _islower - checks if char is lowercase
 * @c: char
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int _islower(int c)
{
int i;
if (c >= 97 && c <= 122)
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
