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

typedef struct type_spec
{
	char *spec;
	int (*func)(va_list ap);
} type_spec;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_percent(va_list ap);
int printf_int(va_list ap);
int printf_decimal(va_list ap);
int printf_string(va_list ap);
int printf_char(va_list ap);
#endif
