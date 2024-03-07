#include "main.h"
/**
*factorial - return the faactorial of a given number 
*@n: the number of factorial 
*Return: the factorial
*/
int factorial(int n)
{

	 if (n < 0)
	return -1; 
	if (n == 0)
	 return 1;
	 else
	return n * factorial(n - 1);
}
