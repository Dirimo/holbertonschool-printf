#include "main.h"
/**
 * _printf 
 * @format: indentifier
 * return : int
 */

int _printf(const char *format, ...)
{

	match m[] = {
		{"%c", print_char}, {"%s", strlen}, {"%%", print_20}, {"%d", print_deci}, {"%i", print_int}

	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == "%" && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] = '\0')
	{
		j = 5;
		while (j >= 0)
		{
			if (m[j]. id[0] == format[i] && m[j].id[1] == format[i + 1])

				len = len + m[j].f(args);
			i = i + 2;
			goto Here;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
