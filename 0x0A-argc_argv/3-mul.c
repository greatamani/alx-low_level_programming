#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to main
 * @argv: Array of strings of arguments passed to main function
 * Return: exit Always EXIT_SUCCESS
 *
 */

int main(int argc, char *argv[])
{
	if (argc > 1 && argc < 4)
	{
		printf("%d\n", argv[1] * argv[2]);
	} else {
		printf("%s\n", "Error");

		return (1);
	}
	exit(EXIT_SUCCESS);
}
