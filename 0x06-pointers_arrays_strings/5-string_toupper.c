#include "main.h"

/**
 *string_toupper - function that changes to uppers
 *@str: parameter
 *Return: return a character
 */
char *string_toupper(char *str)
{
int index = 0;

while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}
return (str);
}
