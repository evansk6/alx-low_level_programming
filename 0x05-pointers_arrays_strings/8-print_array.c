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
	int arr[n];
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d :", i);
		scanf("%d ", arr[i]);
	}
	for (i = 0; i < n; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
}
