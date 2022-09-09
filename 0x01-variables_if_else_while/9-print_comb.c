#include <stdio.h>
/**
 * main - prints a random number and state wheather it is
 * postive negative or zero
 * Return: Alwayes 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	putchar (c);
	if (c != 57)
	{
		putchar(',');
		putchar(' ');

	}
}
putchar('\n');
return (0);
}

