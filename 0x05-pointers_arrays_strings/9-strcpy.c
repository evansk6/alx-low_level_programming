#include "main.h"
#include <string.h>

/**
 * *_strcpy -> copy the string
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
