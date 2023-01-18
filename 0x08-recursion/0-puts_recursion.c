#include <stdio.h>
#include "main.h"

/**
 *function _puts_recursion: To print String
 *Return: null
 *
 **/

void _puts_recursion(char *s)
{
	int i = strlen(s);
	char c[i] = *s;
	int j = 0;

	if(c[i] == '\0')
		return;

	_putcahr(c[i]);
	
	 _puts_recursion(char *s);
}


