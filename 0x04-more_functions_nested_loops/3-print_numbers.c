#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to display numbers
 * 0 to 9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
}
