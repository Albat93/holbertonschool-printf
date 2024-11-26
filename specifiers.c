#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 */
void printf_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
}

/**
 */
void printf_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
void printf_percent(va_list ap)
{
	char c = va_arg(ap, int);
	if (c == '%')
		_putchar(37);
}
