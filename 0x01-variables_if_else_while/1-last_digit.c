#include <stdlib.h>
#include <time.h>`
#include <stdio.h>
/**
  * main - Entery point
  *
  *Return: Alwayes 0 (success/correct)
  */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("last digit of %i is %i and is greater than 5\n", n , n % 10);

}
{
else if ("last digit of %i is %i and is 0\n", n , n % 10);
}
{
else("last digit of %i is %i and is less than 6 and not 0\n" , n , n % 10);
}
return (0);
}
