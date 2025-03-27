#include <stdarg.h>
#include <stddef.h>
#include "main.h" /* Assuming main.h contains necessary declarations */

/**
 * _printf - Produces output according to a format
 * @format: A character string containing directives
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char},
		{"%s", printf_string}, /* Corrected to printf_string */
		{"%%", print_37},
		{"%d", print_deci},
		{"%i", print_int}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0') /* Corrected the loop condition */
	{
		j = 0; /* Corrected to start from 0 */
		while (j < 5) /* Corrected the loop condition */
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j++; /* Increment j */
		}
		_putchar(format[i]);
		i++;
		len++;
	}

	va_end(args);
	return (len);
}
