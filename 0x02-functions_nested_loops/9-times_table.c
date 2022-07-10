#include "main.h"
#include <stdio.h>

/**
 * main -> prints the 9 times table, starting with 0
 * @c: integer parameter
 * Return: always 0
 */
void times_table(void)
{
	int j, i, n;

	printf("Input upto the table number from 0 : ");
	scanf("%d", &n);
	printf("9 times table from 0 to %d \n", n);
	for (i = 0; i <= 10; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= n - 1)
				printf("%dx%d = %d, ", j, i, i * j);
			else
				printf("%dx%d = %d, ", j, i, i * j);

		}
		printf("\n");
	}
}
