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
	int i = 0;
	int count = 0, result_compare;

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
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				result_compare = compare_spec(format[i], ap);
				if (result_compare == 0)
				{
					_putchar('%');
					_putchar(format[i]);
					count += 2;
				}
				else
					count += result_compare;
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
