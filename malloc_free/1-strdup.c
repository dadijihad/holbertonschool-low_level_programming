#include "main.h"
/**
 *_strdup - return a pointer to a newly allocated in memory
 *@str: string to duplicate
 *Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	a = malloc(i * sizeof(*a) + 1);

	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
