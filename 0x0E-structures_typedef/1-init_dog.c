#include <stdlib.h>

/**
 * init_dog -> variables
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
