#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other strings
 * @str: print the strings
 *
 * Return: return nothing
 */

void puts2(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}
