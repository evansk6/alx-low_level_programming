#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -> random pasword
 * Return: 0
 */
int main(void)
{
	int pass, num;

	srand(time(NULL));
	sum = 0;
	while (sum <= 1145)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", passs);
	}
	printf("%c", 2387 - sum);

	return (0);
}
