#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: Is an string with the sentences or plain text to print.
 *
 * Return: The lenght of all sentences and plain text.
 */
int _printf(const char *format, ...)
{
	int i;
	va_list arg_list;
	int (*f_print)(va_list);
	int length_full = 0;

	if (format)
	{
		va_start(arg_list, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					_putchar('%');
					i++;
					length_full++;
					continue;
				}
				f_print = RCL(&format[i + 1]);
				if (f_print == NULL && format[i + 1])
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					length_full += 2;
					i++;
					continue;
				}

				length_full += f_print(arg_list);
				i++;
			}
		}
	}
	else
		return (-1);
	return (length_full);
}
