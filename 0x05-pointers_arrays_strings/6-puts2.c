#include "main.h"
/**
 * puts 2 - function should print only one character out of two
 * starting with the first one
 * @str: Input
 */
void puts2(char *str)
{
	iny longi = 0;
	int t =0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
	_putchar(str[o]);
	}
	}
	_putchar('\n');
}
