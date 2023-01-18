#include "main.h"

/**
 * _pow_recursion - Cvalue of x raised to the power of y
 * @x: Given number
 * @y: raised power
 * Return: The power of x raised to y
 **/

int _pow_recursion(int x, int y)
{
	int i = x;
	int j = y;

	if (j < 0)
	{
		return (-1);
	} else if (j == 0)
	{
		return (1);
	} else if (j == 1)
	{
		return (i);
	}

	return (i * _pow_recursion(i, j - 1));
}
