#include "main.h"

/**
 * _strcpy - a function that copies the string pointed
 * to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
	l++;
	}

	for (int x = 0; x <= l; x++)
	{
	dest[x] = src[x];
	}

	return (dest);
}
