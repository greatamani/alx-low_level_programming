#include <stdio.h>
#include "main.h"

/**
 * convertStringToInteger - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

unsigned int convertStringToInteger(char *s)
{
	unsigned int i, d, n, len, f, digit;

	i = d = n = len = f = digit = 0;

	while (s[len] != '\0')
	{
		if (s[len] < '0' || s[len] > '1')
			return (n);
		len++;
	}

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] == '0' || s[i] == '1')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;

			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}

		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: attribute consist of binary variable
 *
 * Return: the converted number, or 0
 *
 **/

unsigned int binary_to_uint(const char *b)
{
	char *str;

	unsigned int num, decimal_num = 0, base = 1, rem;

	/* Convert string to integer*/

	str = (char *)b;

	if (str == NULL)
		return (0);

	num = convertStringToInteger(str);

	 /* assign the binary number to the binary_num variable*/

	while (num > 0)
	{
		rem = num % 10; /**
				* divide the binary number by 10 and
				* store the remainder in rem variable.
				**/
		decimal_num = decimal_num + rem * base;

		num = num / 10; /* divide the number with quotient*/
		base = base * 2;
	}

	return (decimal_num);

}
