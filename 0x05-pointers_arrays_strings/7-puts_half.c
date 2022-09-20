#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of the strings
 * @str: strings
 * Return: half the input
 */

void puts_half(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}
str -= (len / 2);
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
