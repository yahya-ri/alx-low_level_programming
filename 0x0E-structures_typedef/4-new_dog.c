#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return: new dog's struct if it fail will returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, dog_name, dog_owner;

	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL || !(name) || !(owner))
	{
		free(new_dog);
		return (NULL);
	}

	for (dog_name = 0; name[dog_name]; dog_name++)
		;

	for (dog_owner = 0; owner[dog_owner]; dog_owner++)
		;

	new_dog->name = malloc(dog_name + 1);
	new_dog->owner = malloc(dog_owner + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < dog_name; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; i < dog_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
