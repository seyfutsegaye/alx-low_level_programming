#define HOLBERTION_H_INCLUDED
#define HOLBERTION_H_INCLUDED
#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
