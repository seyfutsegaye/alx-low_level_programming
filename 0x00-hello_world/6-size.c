#include <stdio.h>
/**
  * 
  * main entery - point
  *
  *Return: Alwayes 0 (Sucess)
  */
int main(void)
{
	prntf("size of char: %d byte(s)\n", sizeof(char));
	prntf("size of int: %d byte(S)\n", sizeof(int));
	prntf("size of long int: %d byte(S)\n", sizeof(long int));
	prntf("size of long long int: %d byte(S)\n", sizeof(long long int));
	prntf("size of float: %d byte(S)\n", sizeof(float));
	return(0);
}
