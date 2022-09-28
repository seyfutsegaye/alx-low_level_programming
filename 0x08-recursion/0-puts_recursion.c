#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print the string followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
