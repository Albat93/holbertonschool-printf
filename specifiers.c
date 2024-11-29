#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * printf_char - print char c with _putchar
 * @ap: argument parameters
 * Return: 1 on success
 */
int printf_char(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
	return (1);
}

/**
 * printf_string - prints a char string to stdout
 * @ap: argument parameters
 * Return: lenght of the string
 */
int printf_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0, count = 0;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
/**
 * printf_percent - print modulo sign
 *
 * @ap: argument parameter
 * Return: number of characters printed
 */
int printf_percent(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}
/**
 * printf_decimal - print decimal and integer
 *
 * @ap: argument parameter
 * Return: int printed
 */
int printf_decimal(va_list ap)
{
	int n = va_arg(ap, int), count = 0, i = 0;
	int buffer[12];
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(buffer[i]);
	}
	return (count);
}
/**
 * _printf_unknown - deal with unknown specifier
 *
 * @format_spec: specifier to check
 * Return: the char to be printed
 */
int _printf_unknown(char format_spec)
{
	_putchar('%');
	_putchar(format_spec);
	return (2);
}
