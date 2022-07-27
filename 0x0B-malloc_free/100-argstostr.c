#include <stdlib.h>

/**
 * argstostr -> concanates all argument
 * @ac: param
 * @av: param
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **av;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	while (av[ac])
		ac++;

	av = (char *)malloc(i * sizeof(char) + 1);
	av[i] = '\0';
	return (av);
}
