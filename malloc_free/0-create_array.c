#include "main.h"
/**
*create_array - create array of chars
*@size: the size of the memroy
*@c: specific char 
*return: a pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
		unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';
	return (array);
}
