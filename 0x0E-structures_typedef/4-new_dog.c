#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *new_dog - new dog structure
 *@name: pointer to dog's name
 *@age: float for dog's age
 *@owner: pointer to dog's owner
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;
	dog_t *dog2;

	for (x = 0; name[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; owner[y] != '\0'; y++)
	{
		;
	}
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(sizeof(dog2->name) * x);
	if (dog2->name == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		dog2->name[z] = name[z];
	}
	dog2->age = age;
	dog2->owner = malloc(sizeof(dog2->owner) * y);
	if (dog2->owner == NULL)
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (z = 0; z < y; z++)
		dog2->owner[z] = owner[z];
	return (dog2);
}
