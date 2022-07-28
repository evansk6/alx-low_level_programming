#include <stdlib.h>

/**
 * malloc_checked -> allocates memory
 * @b: param
 * Return: 0
 */
 void *malloc_checked(unsigned int b)
{
	void *p;
	
	p =malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
