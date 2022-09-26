#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print the cheaseboard
 * @a: array of pointers
 *
 * Return: return zero
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i <= 7; i++)
{
for (j = 0; j <= 7; j++)
{
putchar(a[i][j]);
}
putchar(10);
}
}
