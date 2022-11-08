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
	int (*f)(va_list);
	int lenght_full = 0;

	if (format)
	{
		va_start(arg_list, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				f = RCL(&format[i + 1]);
				if (f == NULL)
				{
					if (format[i + 1] || format[i + 1] == '%')
					{
						_putchar(format[i]);
						_putchar(format[i + 1]);
						lenght_full += 2;
						i++;
						continue;
					}
					else
						return (-1);
				}
				lenght_full += f(arg_list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				lenght_full++;
			}
		}
	}
	else
		return (-1);

	return (lenght_full);
}
