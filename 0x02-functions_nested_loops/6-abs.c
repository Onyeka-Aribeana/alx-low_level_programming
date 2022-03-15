#include <stdio.h>
#include "main.h"
int _abs(int);
/**
 * _abs - prints absolute of number
 * @n: number
 *
 * Description: does my stuff
 * Return: 1 or 0
 */
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
}
return (n);
}
