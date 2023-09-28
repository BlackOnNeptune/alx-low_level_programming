#include "main.h"

/**
 * set_bit - Sets a specific bit at a given index to 1.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 if successful, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
