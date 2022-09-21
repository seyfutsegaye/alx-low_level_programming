#include "main.h"

/**
 * _strncpy - c function copy all the  strings
 * terminating null bytes
 * @dest: storing the string
 * @src: source strig
 * @n: max number of byte copey
 * Return: return the value
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
