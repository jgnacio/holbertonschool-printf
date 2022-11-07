#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdlib.h>
#include <stdarg.h>

typedef struct typefunctions
{
	char identifier;
	int (*function)(va_list arg);
} t_func;

int _printf(const char *format, ...);
int (*RCL(const char *format))(va_list);
int print_spaces(int count_spc);
int print_c(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
void _putchar(char c);

#endif