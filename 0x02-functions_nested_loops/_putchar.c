#include <unistd.h>


/**
 * _putchar - wrtite the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and the error is set approprietly.
 */
int _Putchar(char c)
{
	return (write(1, &c, 1));
}
