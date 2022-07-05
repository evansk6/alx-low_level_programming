#include "main.h"

/**
* main - entry point
*
* Return: the last digit
*/
int print_last_digit(int)
{
int p;

if (n < 0)
n = -n;
p = n % 10;
_putchar(p + '0');
return (p);
}
