#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_cycle - checks if a singly linked list has a cycle
 * @list: pointer to the head of the list
 * Return: 0 in case of no cycle and 1 otherwise
 */

int check_cycle(listint_t *list)
{
	listin_t *slow = list, *fast = list;

	while (fast && fast ->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
