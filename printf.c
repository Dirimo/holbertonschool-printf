#include "main.h"
/**
 * _printf 
 * @format: indentifier
 * return : int
 */

int _printf(const char *format, ...)
{

	match m[] = {
		{"%c", }, {"%s", strlen}, {"%%", print_20}, {"%d", print_deci}, {"%i", print_int}
	
	}

}
