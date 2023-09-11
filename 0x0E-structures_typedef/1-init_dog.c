#include "dog.h"

/**
 * init_dog - tttttttttt
 * @d:jjj
 * @name:hff
 * @age:gghh
 * @owner:hj
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
