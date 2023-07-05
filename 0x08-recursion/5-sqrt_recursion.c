#include "main.h"

/**
 * check_sqrt - checks for the square root
 * @a: current value to check
 * @b: number to find the square root of
 *
 * Return: square root or -1 if not found
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
