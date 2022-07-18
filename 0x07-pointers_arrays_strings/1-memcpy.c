#include "main.h"

/**
 * _memcpy -> copies
 * @dest: param
 * @src: param
 * @n: param
 * Return: string copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
