#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
