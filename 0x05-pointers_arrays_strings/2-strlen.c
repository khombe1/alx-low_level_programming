#include <stdio.h>

/**
 * _strlen - Calculates the length of the string.
 * @s: The input string.
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	count++;

	return (count);
}
