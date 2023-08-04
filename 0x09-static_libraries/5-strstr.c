#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: input string
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring, or
 * NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *p = needle;

	while (*I == *p && *p != '\0')
	{
	I++;
	p++;
	}

	if (*p == '\0')
	return (haystack);
	}

	return (NULL);
}
