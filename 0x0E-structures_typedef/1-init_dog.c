#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable to type struct 
 * @p: pointer which points to the structure
 * @name:name to initialise
 * @age: age to initialise
 * @owner: owner to initialise
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc((sizeof(struct dog));
				d->name = name;
				d->age = age;
				d->owner = owner;
}
