#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nelem = 0;
	const list_t *current = h;

	while (current != NULL)
{
	if (current->str == NULL)
	printf("[%u] %s\n", 0, "(nil)");
	else
	printf("[%u] %s\n", current->len, current->str);

	current = current->next;
	nelem++;
}

	return (nelem);
}
