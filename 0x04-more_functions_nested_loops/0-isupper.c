#include "main.h"
/**
 * _isupper - function to cheak for upercase characters
 * @c: is the  int used for argument
 * Return: Always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
