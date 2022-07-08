#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print int with putchar
 * @n: integer param
 *
 * Return: void
 */

void print_number(int n)
{
unsigned int m;

if (n < 0)
{
_putchar('-');
m = -n;
}
else
{
m = n;
}
if (m / 10 != 0);
_putchar((m % 10) + '0');
}
