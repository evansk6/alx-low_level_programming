#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	long n, x;

	n = 612852475143;
	for (x = 2, x < n; x++)
	{
		while (n % x == 0)
			n = n / x;
	}
	printf("%1u\n", n);

	return (0);
}
