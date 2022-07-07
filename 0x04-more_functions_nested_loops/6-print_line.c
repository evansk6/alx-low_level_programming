#include "main.h"

/**
 * main -> printing line
 * @n: integer params
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	return;
	for (c = 0; c < n; c++)
		_putchar(95);
	_putchar('\n');
}
