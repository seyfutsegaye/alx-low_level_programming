#include <stdio.h>
/**
 * main - prints a random number and state wheather it is
 * postive negative or zero
 * Return: Alwayes 0
 */
int main(void)
{
char c;
int i;
long li;
long  long int lli;
float f;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
