#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - pint the strigs in revirse order
 * @s: string to reverse
 * Return: return nothing
 */

void print_rev(char *s)
{
int len = strlen(s);

while (len--)
putchar(*(s + len));
putchar(10);
}
