#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

	while (dest[dest_len] != '\0')
{
	dest_len++;
}

	while (src[i] != '\0' && i < n)
{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
}

	dest[dest_len] = '\0';
	return (dest);
}
