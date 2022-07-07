#include "main.h"

/**
 * main -> printing line
 * @n: integer parameter
 */
void print_diagonal(int n)
{
	int c, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c < n; c++)
		{
			for (x = 0; x <= c; x++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
