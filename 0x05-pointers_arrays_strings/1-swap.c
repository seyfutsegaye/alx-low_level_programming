#include "main.h"

/**
 * swap_int - swap two intigers values
 * @a: first value
 * @b: secound value
 * Return: return nothing
 */

void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
