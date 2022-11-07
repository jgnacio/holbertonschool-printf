#include "main.h"

/**
 *
 *
 *
 */
int print_srt(va_list arg)
{
	char *aux;
	int i;

	if (arg)
	{
		aux = va_arg(arg, char*);

		for (i = 0; aux[i]; i++)
		{
			_putchar(aux[i]);
		}
		return (i);
	}
	return (-1);
}

/**
 *
 *
 *
 */
int print_c(va_list arg)
{
	if (arg)
	{
		_putchar(va_arg(arg, int));
		return (1);
	}
	return (0);
}
/**
 *
 *
 *
 */
int print_int(va_list arg)
{
	if (arg)
	{
		_putchar('I');
		_putchar('N');
		_putchar('T');
		_putchar('\n');
	}
	return (1);
}
