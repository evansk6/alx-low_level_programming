#include "main.h"

/**
 * _puts_recursion -> string
 * @s: string parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*d == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
