#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	char *str;
	va_list args;
	int ch;

	va_start(args, format);

	while(*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format){
				case 'c': ch = va_arg(args, int);
					  _print_char(ch);
					  break;
				case 's': str = va_arg(args, char *);
					_print_string(str);
					  break;
			}
			format++;
			
		}

		_putchar(*format);

		format++;
	}

	va_end(args);

	return (0);
}

void _print_char(char chr)
{
	_putchar(chr);
}

void _print_string(char *ch)
{
	while(*ch != '\0')
    {
        _putchar(*ch++);
    }
}
