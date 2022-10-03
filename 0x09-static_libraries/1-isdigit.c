#include "main.h"
/**
 * _isdigit - function to cheak for digits
 * @c: is the  int used for argument
 * Return: Always 0
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
