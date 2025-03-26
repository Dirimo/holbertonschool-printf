#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
* printf_string - imprime une chaîne de caractères
* @val: liste d'arguments variables
* Return: la longueur de la chaîne
*/
int printf_string(va_list val)
{
char *str = va_arg(val, char *);
if (str == NULL)
str = "(null)";
size_t length = strlen(str); /* Utilisation de strlen*/
write(1, str, length);
return length;
