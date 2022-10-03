#include "main.h"
/**
 * _islower - function to cheak for lowercase characters
 *@c: is the  int used for argument
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
