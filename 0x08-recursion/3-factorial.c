#include "main.h"

/**
 * factorial - Calculate the actorial of a given number
 * @n: Given number
 * Return: The factorial of a given number
 **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
