#include "main.h"

/**
 * _strstr -> substring
 * @haystack: string param
 * @needle: param
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (hystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break++;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
