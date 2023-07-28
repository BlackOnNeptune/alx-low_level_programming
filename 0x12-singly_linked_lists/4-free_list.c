#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
{
	current_node = head;
	head = head->next;

	free(current_node->str);
	free(current_node);
}
}
