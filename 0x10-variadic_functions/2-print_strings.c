#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 * @...: variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)

	{
	str = va_arg(list, char *);
	if (!str)
	str = "nil";

	if (i > 0 && separator)
	{
	printf("%s", separator);
	}
	printf("%s", str);
	}
	printf("\n");
	va_end(list);
}
