#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i;
	va_list arg_list;
	int (*f)(va_list);

	va_start(arg_list, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = RCL(&format[i + 1]);
			f(arg_list);
			i++;
		}
		else
			_putchar(format[i]);
	}

	return (i);
}
