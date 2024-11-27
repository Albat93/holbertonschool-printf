#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 */
int printf_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
	return (1);
}

/**
 */
int printf_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (1);
}

int printf_percent(va_list ap)
{
	(void) ap;
	_putchar ('%');
	return (1);
}

int printf_decimal(va_list ap)
{
	int n = va_arg(ap, int);
	int j = 0;
	char buffer[11];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		buffer[j] = (n % 10) + '0';
		j++;
		n /= 10;
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}

	return (1);

}
