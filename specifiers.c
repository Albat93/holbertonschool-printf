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
	int i;
	char *str = va_arg(ap, char *);
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

void printf_percent(va_list ap)
{
	char '%' = va_arg(ap, char);
	if ('%'== 37)
		_putchar(37);
}
