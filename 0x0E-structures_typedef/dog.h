#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure of dog
 *@name: pointer to dog's name
 *@age: age of dog as a float
 *@owner: pointer to dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
