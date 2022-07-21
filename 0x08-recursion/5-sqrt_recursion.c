#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion -> squre root
 * @n: param
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> square root
 * @n: num param
 * @i: param
 * Return: 0
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (1);
	return (_sqrt(n, i + 1));
}
