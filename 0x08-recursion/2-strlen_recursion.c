#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string pointer to count the length
 * Return: Length of string
 **/

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
