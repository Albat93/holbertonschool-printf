#include <stdarg.h>
#include "main.h"

/**
 * compare_spec - compare specifier with function associated
 * @format_spec: specifier to check
 * @ap: La liste d'arguments (va_list)
 *
 * Return: the number of char printed. or 0 if wrong specifier
 */
int compare_spec(char format_spec, va_list ap)
{
	int j;
	int count = 0;

	type_spec spec[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_decimal},
		{"i", printf_decimal},
		{NULL, NULL},
	};
	j = 0;
	while (spec[j].spec)
	{
		if (format_spec == spec[j].spec[0])
		{
			count = spec[j].func(ap);
			return (count);
		}
		j++;
	}
	return (_printf_unknown(format_spec));
}
