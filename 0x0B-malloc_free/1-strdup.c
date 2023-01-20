#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - an array of chars, and initializes it with a specific char
 * @str: String passed to a function
 *
 * Return: pointer to an array memory
 *
 **/

char *_strdup(char *str)
{
	char *n_str;

	str = malloc(4 * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	n_str = malloc(4 * sizeof(char));

	int i;

	i = 0;

	while (str[i] != '\0')
		n_str = str++;
		i++;

	return (n_str);
}
