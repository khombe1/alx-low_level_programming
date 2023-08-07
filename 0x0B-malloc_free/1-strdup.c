#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: char pointer to the input string
 *
 * Return: pointer to the duplicated string, NULL if allocation fails or str is NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;
    
	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
	i++;

	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
	return (NULL);

	for (r = 0; str[r]; r++)
	aaa[r] = str[r];

	aaa[r] = '\0';
    
	return (aaa);
}
