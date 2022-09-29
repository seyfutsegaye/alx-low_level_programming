#include "main.h"

/**
 * _length - cheak the length of a string
 * @s: is string
 * Return: the length of a string
 */

int _length(char *s)
{
if (*s == '\0')
return (0);
return (1 + _length(s + 1));
}
 /**
  * checkp - cheak if a string is palindrome
  * @i: is the index
  * @lg: the length of thr string
  * @s: is the string
  * Return: 1 if it is palindrome 0 if not
  */

int checkp(int i, int lg, char *s)
{
if (lg > 0)
{
if (s[i] == s[lg])
{
return (checkp(i + 1, lg - 1, s));
}
else if (s[i] != s[lg])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}

/**
 * is_palindrome - cheak if a string is  palindrome
 * @s: is string
 * Return: 1 if it is palindrome 0 if not
 */

int is_palindrome(char *s)
{
return (checkp(0, _length(s) - 1, s));
}
