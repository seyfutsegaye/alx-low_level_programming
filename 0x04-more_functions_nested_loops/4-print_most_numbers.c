#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers exept 2 or 4
 *
 * Return: return nothing
 */

void print_most_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if ((n == 2) || (n == 4))
{
continue;
}
else
putchar(n + '0');
}
putchar('\n');
}
