#ifndef _create_printf_
#define _create_printf_
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct _printf - name of the structure for printf function
 * @f: pointer of function
 * @spec: specifier string
 */

typedef struct _printf
{
	char *spec;
	int (*print)(va_list ap, int);
} print;

int _printf(const char *format, ...);
int _putchar(char c);
int print_percent(va_list ap);
int print_int(va_list ap);
int print_decimal(va_list ap);
int print_string(va_list ap);
int print_char(va_list ap);
#endif
