#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';
	return (dest);
}
