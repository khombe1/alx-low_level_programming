#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command line arguments into a single string
 * @ac: number of arguments
 * @av: array of argument strings
 * Return: pointer to concatenated string, NULL if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, str_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	total_len++;
	}

	str = malloc(sizeof(char) * (total_len + ac + 1));
	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	str[str_len] = av[i][j];
	str_len++;
	}
	str[str_len] = '\n';
	str_len++;
	}
	str[str_len] = '\0';

	return (str);
}
