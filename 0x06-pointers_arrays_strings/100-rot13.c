#include "main.h"

/**
 * rot13 - function that ecode
 * @str: function to be encoded
 *
 *Return: adress of string
 */

char *rot13(char *str)
{
int i = 0;

while (str[i] != '\0')
{
str[i] = transform_2(str[i]);
i++;
}
return (str);
}
