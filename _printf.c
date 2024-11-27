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
	int i = 0, j;
	int count = 0;

	type_spec spec[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_decimal},
		{"i", printf_decimal},
		{NULL, NULL},
	};
	va_start(ap, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				j = 0;
				while (spec[j].spec)
				{
					if (format[i] == spec[j].spec[0])
					{
						spec[j].func(ap);
						count++;
						break;
					}
					j++;
				}
			}
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
