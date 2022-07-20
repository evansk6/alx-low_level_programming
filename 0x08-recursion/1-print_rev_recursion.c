#include "main.h"

/**
 * _print_rev_recursion -> string in reverse
 * @s: strig param
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
