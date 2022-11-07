#include "main.h"

/**
 *
 *
 *
 *
 */
int (*RCL(const char *format))(va_list)
{
	t_func data_type[] = {
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


	return (data_type[0].function);
}
