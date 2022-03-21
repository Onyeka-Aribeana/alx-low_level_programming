#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of the arguments
 * @a: number
 * @b: number
 *
 * Description: do stuff
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
