#include "main.h"

/**
 * print_str - Function that print a string.
 * @arg: The list of variable arguments of _printf function.
 *
 * Return: The lenght of the string or -1 if is NULL.
 */
int print_str(va_list arg)
{
	char *aux;
	int i;

	if (arg)
	{
		aux = va_arg(arg, char*);
		if (aux)
		{
			for (i = 0; aux[i]; i++)
			{
				_putchar(aux[i]);
			}
			return (i);
		}
		else
		{
			write(1, "(null)", 6);
			return (6);
		}
	}
	return (-1);
}

/**
 * print_c - Function that print a character.
 * @arg: The list of variable arguments of _printf function.
 *
 * Return: 1 or -1 if arg is NULL.
 */
int print_c(va_list arg)
{
	if (arg)
	{
		_putchar(va_arg(arg, int));
		return (1);
	}
	return (-1);
}
/**
 * print_int - Function that print a integer.
 * @arg: The list of variable arguments of _printf function.
 *
 * Return: The number of bytes need to print the integer.
 */
int print_int(va_list arg)
{
	int num;
	int count; 

	if (arg)
	{
		num = va_arg(arg, int);
		if (num == 0)
		{
			_putchar('0');
			return (1);
		}
		count = printnumber(num);
	}
	return (count);
}

int printnumber(int n)
{
	int count = 0;

	if (n < 0) {
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10)
		count += printnumber(n / 10);
	count++;
	_putchar(n % 10 + '0');
	return (count);
}
