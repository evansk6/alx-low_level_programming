#include <stdio.h>

/**
 * main -> prints the name
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, attribute ((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
