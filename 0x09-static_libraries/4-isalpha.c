#include "main.h"
/**
 * _isalpha - function to cheak c is lower ,upper or letter
 * @c: is an int used for argument
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
