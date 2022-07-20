#include "main.h"

/**
 * factorial -> factorial
 * @n: string
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial (n - 1));
	}
}
