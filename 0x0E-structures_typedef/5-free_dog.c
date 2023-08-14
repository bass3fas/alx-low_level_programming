#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - func
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
