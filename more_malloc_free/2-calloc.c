#include "main.h"
/**
*_calloc - allocates memory for an array
*@nmemb: element of size bytes
*@size: size of the memory
*Return: a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
		char *c;
		unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			c[i] = 0;
		return (c);
	}
	else
		return (NULL);
}
