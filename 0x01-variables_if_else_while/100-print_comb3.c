#include <stdio.h>

/**
 * main - prints single digit number startinf 0
 *
 * Return: return 0 at the end
 */

int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (j > i)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

