#include "main.h"
#include <stdio.h>
/**
 * _puts - print the string
 * @str: string to print
 *
 * Description: prints a string
 * on success: return on error
 */

void _puts(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}
