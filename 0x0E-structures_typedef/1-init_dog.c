#include "dog.h"
/**
 *init_dog - initialize struct dog
 *@d: pointer to type struct dog
 *@name: pointer to dog name
 *@age: float for dog age
 *@owner: pointer to dog owner
 *
 *return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
