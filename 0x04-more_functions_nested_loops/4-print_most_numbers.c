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

for (n = 48; n <= 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
putchar(n);
}
putchar(10);
}
