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
int print_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int print_20(void);
int print_int(va_list args);
int print_deci(va_list args);

#endif
