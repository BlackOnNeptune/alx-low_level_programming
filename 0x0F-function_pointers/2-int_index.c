#include "function_pointers.h"

/**
 * int_index- return index if comp=True, else -1
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of the first matching element, or -1 if no match or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}

	return (-1);
}

