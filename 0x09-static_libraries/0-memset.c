#include "main.h"

/**
 * _memset - fills memory with a constant type
 * @s: storing strings
 * @b: the contact byte
 * @n: length buffer
 * Return: return the string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
