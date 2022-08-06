#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_string -> print strings
 * @separator: param
 * @n: num param
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
