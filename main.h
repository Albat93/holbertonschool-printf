#ifndef _create_printf_
#define _create_printf_
#include <stdarg.h>

/**
 * struct _printf - name of the structure for printf function
 * @f: pointer of function
 * @spec: specifier string
 */

typedef struct _printf
{
	char *spec;
	_printf (*f)(va_list ap);
} _printf;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
