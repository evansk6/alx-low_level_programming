#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -> variables
 * @d: structure param
 * @dog: param
 * @name: param
 * @age: paramm
 * @owner: param
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
