#include "main.h"
#include <stdio.h>

/**
 * print_array -> element of an array
 * @a: param 1
 * @n: parameter 2
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int n;
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%d ,", a);
		scanf("%d ", &arr[a]);
	}
	for (a = 0; a < n; a++)
	{
	printf("%d ", arr[a]);
	}
	printf("\n");
}
