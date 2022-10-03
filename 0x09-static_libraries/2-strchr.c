#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to search
 * Return: to thr first occurence
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}

