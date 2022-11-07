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
	int lenght_full = 0;

	va_start(arg_list, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = RCL(&format[i + 1]);
			lenght_full += f(arg_list);
			i++;

		}
		else
		{
			_putchar(format[i]);
			lenght_full++;
		}
	}

	return (lenght_full);
}
