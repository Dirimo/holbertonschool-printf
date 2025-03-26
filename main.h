#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int print_char(va_list val);
int _printf(const char *format, ...);
int printf_char(va_list attri);
int print_string(va_list attri);
int print_20(void);
int print_int(va_list args);
int print_deci(va_list args);

#endif
