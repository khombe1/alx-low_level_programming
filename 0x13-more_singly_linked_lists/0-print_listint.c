#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
	return (0);
	}

	size_t num = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
	printf("%d\n", current->n);
	current = current->next;
	num++;
	}

	return (num);
}
