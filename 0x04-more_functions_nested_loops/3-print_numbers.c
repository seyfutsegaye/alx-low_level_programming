#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to display numbers
 * 0 to 9
 *
 * Return: return nothing
 */
void print_numbers(void)
{
int n;

for (n = 48; n <= 58; n++)
{
putchar(n);
}
putchar(10);
}
