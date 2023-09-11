#include <stdio.h>
#include "doh.h"

/**
 * free_dog - gggg
 * @d: jjj
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
