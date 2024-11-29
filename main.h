#ifndef _create_printf_
#define _create_printf_
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct type_spec - name of the structure for printf function
 * @func: pointer of function
 * @spec: specifier string
 */

typedef struct type_spec
{
	char *spec;
	int (*func)(va_list ap);
} type_spec;

int compare_spec(char format_spec, va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_percent(va_list ap);
int printf_int(va_list ap);
int printf_decimal(va_list ap);
int printf_string(va_list ap);
int printf_char(va_list ap);
int _printf_unknown(char format_spec);
#endif
