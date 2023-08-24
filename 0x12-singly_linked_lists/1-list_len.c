#include <stdlib.h>
#include "lists.h"

/**
 * list_len - The number of elements in a linked list
 * @h: list_t list pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
