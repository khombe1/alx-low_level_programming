#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: None (void)
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (s[longi] != '\0')
	{
	longi++;
	}
	s--;

	for (o = longi; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
