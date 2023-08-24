#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the first node of the list
 * @str: string to add in the new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	temp = *head;
	while (temp->next)
	temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
