#include "main.h"
#include <string.h>

/**
 * _strncat -> function
 * @dest: param
 * @src: param
 * @n: param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
