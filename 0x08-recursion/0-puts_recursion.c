#include <stdio.h>
#include "main.h"

/**
 *function _puts_recursion: To print String
 *Return: null
 *
 **/

void _puts_recursion(char *s)
{
	if(*s == '\0')
	_putchar('\n');
	return;

	_putchar(*s);
	
	_puts_recursion(s + 1);
}


