#include "main.h"

/**
 * check_prime - checks if a number is prime
 * @divisor: current divisor to check
 * @num: number to check for primality
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int divisor, int num)
{
	if (num < 2 || num % divisor == 0)
		return (0);
	else if (divisor > num / 2)
		return (1);
	else
		return (check_prime(divisor + 1, num));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}

