#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function
 * @func: The function pointer
 * @bytes: Number of bytes to print
 */
void print_opcodes(void (*func)(), int bytes)
{
	int i;
	unsigned char *opcodes = (unsigned char *)func;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", opcodes[i]);
			break;
		}
		printf("%02hhx ", opcodes[i]);
	}
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((void (*)())main, bytes);

	return (0);
}

