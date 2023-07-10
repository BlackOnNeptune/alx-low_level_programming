#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, total_length = 0, current_position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++; /* Add space for the '\n' character */
	}

	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	/* Concatenate the arguments */
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated[current_position] = av[i][j];
			current_position++;
			j++;
		}
		concatenated[current_position] = '\n';
		current_position++;
	}

	concatenated[current_position] = '\0';

	return (concatenated);
}

