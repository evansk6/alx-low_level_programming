#include "main.h"

/**
 * string_toupper -> convert to uppercase
 * @x: param
 * Return: string
 */
char *string_toupper(char *)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] -32;
		i++;
	}
	return (x);
}