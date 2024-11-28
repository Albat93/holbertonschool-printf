#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - our function printf
 * @format: Types of arguments passed to function
 * Return: matches specifier with the right function to print
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, count = 0, r_spec = 0;

	va_start(ap, format);

	if (*format == '\0')
	{
		va_end(ap);
		return (-1);
	}

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			r_spec += compare_spec(format[i + 1], ap);
			if (r_spec == 0)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				count += 2;
			}
			count += r_spec;
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
