#include "main.h"
/**
* main -entry point
* printing lowercase alphabets 10 times
*
*/

void print_alphabet_x10(void)
{
int j;
int x;

for (x = 0; x < 10; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
