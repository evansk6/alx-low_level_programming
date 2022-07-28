#include <stdlib.h>

/**
 * string_nconcat -> concanate two strings
 * @s1: string param
 * @s2: string
 * @n: string
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, index;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';
	return (concat);
}
