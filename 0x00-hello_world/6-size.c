#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
printf("Size of a char: %zu", sizeof(char), " byte(s)\n)");
printf("Size of an int: %zu", sizeof(int), " byte(s)\n");
printf("Size of a long int: %zu", sizeof(long int), " byte(s)\n");
printf("Size of a long long int: %zu", sizeof(long long int), " byte(s)\n");
printf("Size of a float: %zu", sizeof(float), " byte(s)\n");
return (0);
}
