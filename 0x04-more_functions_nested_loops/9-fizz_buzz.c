#include <stdio.h>
/**
 * fizz_buzz -> printing to 100
 *
 * Return: void
 */
void main(void)
{
	int x = 100;
	int  i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 ==0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < p)
				printf("Buzz ");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}

		i++

	}
	printf("\n");
	return (0);
}
