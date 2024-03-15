#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Pointer to a string containing the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a string containing the owner's name
 * Return: pointer
 *
 * Description:
 * This function creates a new dog with the specified name, age, and owner.
 * It allocates memory for the new dog structure and copies the provided
 * name and owner strings to the new memory locations.
 * If memory allocation fails, the function returns NULL.
 * Otherwise, it returns a pointer to the newly created dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0 ; name[i] != '\0' ; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0 ; owner[j] != '\0' ; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[j] = '\0';
	new_dog->age = age;

	return (new_dog);
}
