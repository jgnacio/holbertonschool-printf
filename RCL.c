#include "main.h"

/**
 * RCL - Function that This function traverses, compares and
 * returns a function that receives a va_list as argument.
 * @format: Is the string receives in _printf function.
 *
 * Return: The function asociated to data_type.
 */
int (*RCL(const char *format))()
{
	t_func data_type[] = {
		{'i', print_int},
		{'d', print_int},
		{'s', print_str},
		{'c', print_c},
		{'\0', NULL}
	};
	int i;


	for (i = 0; data_type[i].identifier; i++)
	{
		if (format[0] == data_type[i].identifier)
		{
			return (data_type[i].function);
		}
	}


	return (NULL);
}
