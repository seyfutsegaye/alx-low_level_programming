#include "main.h"

/**
 * helperFunction - cheaks if sqrt of number exists
 * @num: number
 * @psqrt: possible sqrt of number
 *
 * Return: sqrt of number -1 for error
 */
int helperFunction(int num, int psqrt)
{
if ((psqrt * psqrt) == num)
{
return (psqrt);
}
else
{
if ((psqrt * psqrt) > num)
return (-1);
else
return (helperFunction(num, psqrt + 1));
}
}

/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: number to find square root
 *
 * Return: sqare root of n
 * -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (helperFunction(n, 0));
}
