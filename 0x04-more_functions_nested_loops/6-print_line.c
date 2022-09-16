#include "main.h"
#include <stdio.h>
/**
 * print_line - print a stright line
 * @n:parameter
 * Return: return nothing
 */

void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
