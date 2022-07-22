#include <stdio.h>

/**
 * main -> number of argument
 * @argc: parameter
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
