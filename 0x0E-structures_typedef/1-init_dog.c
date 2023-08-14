#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type structure dog
 * @b: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *b, char *name, float age, char *owner)
{
	if (b == NULL)
	{
	b = malloc(sizeof(struct dog));
	if (b == NULL)
	return;
	}

	b->name = malloc(strlen(name) + 1);
	if (b->name != NULL)
	strcpy(b->name, name);

	b->age = age;

	b->owner = malloc(strlen(owner) + 1);
	if (b->owner != NULL)
	strcpy(b->owner, owner);
}
