#include "main.h"

/**
 * malloc_checked - allocate memory by using malloc
 * @b: size of memory to be allocated
 *
 * Return: memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}

