#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	_putchar(c);
}

/**
 */
int print_string(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char *);
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

int print_percent(va_list ap)
{
	int i;
	if (i == 37)
		_putchar(37);
}
