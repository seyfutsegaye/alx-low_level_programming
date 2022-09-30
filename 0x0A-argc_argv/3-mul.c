#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of a program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 if it is true , 1 if it is false
 */

int main(int argc, char *argv[])
{
int a, b;

if (argc == 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
