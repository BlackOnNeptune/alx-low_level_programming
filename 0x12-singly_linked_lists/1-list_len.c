#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
{
	current = current->next;
	number_of_nodes++;
}

	return (number_of_nodes);
}

