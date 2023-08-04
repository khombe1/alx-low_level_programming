#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where data is copied
 * @src: memory where data is read from
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r = 0;
	unsigned int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}

	return (dest);
}
