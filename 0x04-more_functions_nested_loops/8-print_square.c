#include "main.h"
#include <stdio.h>

/**
 * print_square - funtion that print square
 * @size: parameter
 * Return: return the value
 */

void print_square(int size)
{
int inc1, inc2;

if (size > 0)
{
for (inc1 = 0; inc1 < size; inc1++)
{
for (inc2 = 0; inc2 < (size - 1); inc2++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
