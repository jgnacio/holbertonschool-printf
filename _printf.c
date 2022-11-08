#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: Is an string with the sentences or plain text to print.
 *
 * Return: The lenght of all sentences and plain text.
 */
int _printf(const char *format, ...)
{
	int i, (*f_print)(va_list), length_full = 0;
	va_list arg_list;

	if (format)
	{
		va_start(arg_list, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%' && format[i + 1])
			{
				if (format[i + 1] == '%')
				{
					_putchar('%');
					length_full = i;
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
			else if (format[i + 1])
			{
				_putchar(format[i]);
				length_full++;
			}
			else
				return (-1);
		}
	}
	else
		return (-1);
	return (length_full);
}
