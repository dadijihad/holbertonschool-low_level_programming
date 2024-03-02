#include "main.h"
/**
*swap_int - swaps the values
*@a:first integer
*@b:second integer
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
