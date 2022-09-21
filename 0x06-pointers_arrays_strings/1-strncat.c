#include "main.h"

/**
 * _strncat - concacnate two strings
 * @dest: string to be appended
 * @src: string to be complited
 * @n: intiger parameter
 * Return: return the value
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
