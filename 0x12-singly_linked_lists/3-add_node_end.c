#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
{
	free(new_node);
	return (NULL);
}

	while (str[len])
	len++;

	new_node->len = len;
	new_node->next = NULL;

	current_node = *head;
	if (current_node == NULL)
{
	*head = new_node;
}
	else
{
	while (current_node->next != NULL)
	current_node = current_node->next;
	current_node->next = new_node;
}

	return (*head);
}
