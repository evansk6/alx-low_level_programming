#include "main.h"

/**
 * swap_int -> swap the value
 * @a: param 1
 * @b: param 2
 */
void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
