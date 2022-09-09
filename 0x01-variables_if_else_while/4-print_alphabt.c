#include <stdio.h>
/**
 * main - prints a random number and state wheather it is
 * postive negative or zero
 * Return: Alwayes 0
 */
int main(void)
{
char ch;
for (ch = 'A' ; ch <= 'Z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
