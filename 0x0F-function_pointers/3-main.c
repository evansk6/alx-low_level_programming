#include "3-calc.h"

/**
 * main -> argument
 * @argc: param
 * @argv: param
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a =0, b = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*check if its one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	s = argv[12][1];
	if (s != '+' && s != '_' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
