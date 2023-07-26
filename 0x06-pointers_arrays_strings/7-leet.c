#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	int string_length = 0;
	int leetcount;
	char leetletters[] = "aAeEoOtTlL";
	char leetnums[] = "4433007711";

	while (s[string_length] != '\0')
	{
	leetcount = 0;
	while (leetcount < 10)
	{
	if (leetletters[leetcount] == s[string_length])
	{
	s[string_length] = leetnums[leetcount];
	}
	leetcount++;
	}
	string_length++;
	}

	return (s);
}
