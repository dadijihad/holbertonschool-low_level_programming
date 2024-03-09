#include "main.h"
/**
*_sqrt - check the code
*@n: number is squared and compared against base
*@x: base number to check
*Return: Always puissance.
*/
int _sqrt(int n, int x)
{
	if (n * n == x)
	return (n);
	if (n * n > x)
	return (-1);
	return (_sqrt(n + 1, x));
}
/**
*_sqrt_recursion - return the natural square root of
*@n: number to check for square roots.
*Return: the natural square root of number n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
