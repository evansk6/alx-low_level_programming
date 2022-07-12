#include "main.h"
#include <string.h>

/**
 *  _strcpy -> copy the string
 * @dest: param
 * @src: param
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
