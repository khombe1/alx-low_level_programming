#include "var_func.h"

/**
 * print_numbers - print numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of arguments passed into the function
 * @...: variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	int num = va_arg(list, int);

	if (i > 0 && separator)
	{
	printf("%s", separator);
	}
	printf("%d", num);
	}
	va_end(list);
	printf("\n");
}
