#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The value to be copied into the memory area.
 * @n: The number of bytes to be copied.
 *
 * Description: This function fills the first @n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 *
 * Return: A pointer to the memory area @s.
 *
 * Note: If the memory areas overlap, the behavior of this function
 * is undefined
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
