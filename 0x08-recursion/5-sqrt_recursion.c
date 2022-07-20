#include "main.h"

/**
 * _sqrt_recursion -> squre root
 * @n: param
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
