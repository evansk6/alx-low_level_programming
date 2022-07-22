#include <stdio.h>

/**
 * main -> argument it receives
 * @argc: param
 * @argv: paran
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}
