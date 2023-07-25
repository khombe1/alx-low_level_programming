#include "main.h"

/**
 * print_rev - function that prints a string in reverse.
 * @s: The used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int c = 0; 

	while (s[c] != '\0')
	{
	c++;
	}

	for (; c  >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
