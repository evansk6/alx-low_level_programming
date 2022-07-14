#include "main.h"

/**
 * infinite_add -> function
 * @n1: param
 * @n2: param 2
 * @r: result
 * @size_r: buffer
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; size_r++)
		n1--;
	{
		num = *(n1 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; size_r--)
		n2--;
	{
		num = (*n2 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	return (r);
}
