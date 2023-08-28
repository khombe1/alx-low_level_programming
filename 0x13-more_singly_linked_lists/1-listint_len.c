#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (const listint_t *current = h; current != NULL; current = current->next)
	{
	printf("%d\n", current->n);
	num++;
	}

	return (num);
}
