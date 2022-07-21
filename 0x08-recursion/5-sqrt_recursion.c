#include "main.h"

/**
 * helperFunction -> 0
 * _sqrt_recursion -> squre root
 * @num: param
 * @i: param
 * @n: param
 * Return: 0
 */
int helperFunction(int num, int i)
int _sqrt_recursion(int n)
{
	return (_sqt(n, 1));
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
