#include "main.h"
#include <stdio.h>

/**
 * _strcmp - return length of string
 * @s1: char array
 * @s2: an array
 *
 * Description: do stuff
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i, n;
n = 0;
for (i = 0;
((s1[i] == '\0' && s2[i] != '\0')
|| (s1[i] != '\0' && s2[i] == '\0')
|| s1[i] != s2[i]);
i++)
{
if (s1[i] < s2[i])
{
n--;
}
else if (s1[i] > s2[i])
{
n++;
}
}
return (n);
}
