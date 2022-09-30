#include "main.h"
#include <stdio.h>

/**
 * main - print the name of a program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Alwayes 0 (success)
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

