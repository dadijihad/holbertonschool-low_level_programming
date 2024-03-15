#include "main.h"
/**
 *array_range - create an array of integers
 *@min: smallest number in the array
 *@max: lagrest value in the array
 *Return: pointer
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a =  malloc(sizeof(*a) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < (max - min + 1); i++)
		a[i] = min + i;
	return (a);
}
