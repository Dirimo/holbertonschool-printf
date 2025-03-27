#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct format - Structure to map format specifiers to functions
 *
 * @id: The format specifier (e.g., "c", "s", "d")
 * @f:  A pointer to the function that handles the specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int print_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int print_37(void);
int print_int(va_list args);
int print_deci(va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H */
