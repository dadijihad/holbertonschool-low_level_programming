#include "main.h"
/**
*_pow_recursion - returns the value of x raised to y
*@x: the base
*@y: the pow
*Return: the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
	return (_pow_recursion(x, y - 1) * x);
	else
		return (-1);
}
