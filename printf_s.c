#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* printf_string - imprime une chaîne de caractères
* @val: liste d'arguments variables
* Return: la longueur de la chaîne
*/
int printf_string(va_list val)
{
char *str = va_arg(val, char *);
int length = 0;
if (str == NULL)
str = "(null)";
while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}
return (length);
}
