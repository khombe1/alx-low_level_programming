#include <stdio.h>

/**
 * my_strlen - Returns the length of the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	t longi = 0

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}
