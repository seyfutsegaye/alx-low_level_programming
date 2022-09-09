#include <stdio.h>
/**
 * main - prints a random number and state wheather it is
 * postive negative or zero
 * Return: Alwayes 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
