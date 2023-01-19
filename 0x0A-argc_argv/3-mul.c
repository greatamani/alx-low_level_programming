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
	/* Remove unused argument*/

	argv = argv;

	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	} else
	{
		printf("%s\n", "Error");

		return (1);
	}
	exit(EXIT_SUCCESS);
}
