#include "main.h"

/**
 * more_numbers -> numbers
 */
void more_numbers(void)
{
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
