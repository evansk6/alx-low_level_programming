#include "main.h"

/**
 * _memset -> function
 * @s: param
 * @b: param
 * @n: param
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
