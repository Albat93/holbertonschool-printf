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
	int i = 0;
	int count = 0;

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
	int num = va_arg(ap, int);
	int buffer[12];
	int count = 0, i = 0, j;

	/**if (num <= INT_MAX && num >= INT_MIN)*/

		if (num < 0)
		{
			_putchar(45);
			num = -num;
			count++;
		}

	while (num > 0)
	{
		buffer[i++] = num % 10;
		num /= 10;
	}

	if (i == 0)
	{
		buffer[i++] = 0;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + buffer[j]);
		count++;
	}

	return (count);
}
