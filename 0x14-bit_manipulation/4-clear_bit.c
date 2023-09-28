#include "main.h"

/**
* clear_bit - Clears a bit at a given index in an unsigned long integer.
* @n: Pointer to the unsigned long integer to modify.
* @index: Index of the bit to clear.
*
* Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

