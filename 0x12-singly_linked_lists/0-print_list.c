#include <stdio.h>
#include "lists.h"

/**
 * print_list - print linked list elemets
 * @z: pointer
 *
 * Return: nodes number
 */
size_t print_list(const list_t *z)
{
	size_t z = 0;

	while (z)
	{
		if (!z->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", z->len, z->str);
		z = z->next;
		s++;
	}

	return (s);
}
