#include "main.h"
/**
 * print_number - print an integer
 * @n: parameter, integer to print
 *
 *Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	_putchar(45);
	i = -1;
	}
	if (i / 10)
	{

	print_number(i / 10);

	}
}
