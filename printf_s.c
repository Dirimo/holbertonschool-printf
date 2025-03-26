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
char *str;
int length = 0;
/* Récupère la chaîne de caractères de la liste d'arguments */
str = va_arg(val, char *);
/* Si la chaîne est NULL, utilise "(null)"*/
if (str == NULL)
str = "(null)";
/* Calcule la longueur de la chaîne*/
while (str[length] != '\0')
{
length++;
}
/* Écrit la chaîne sur la sortie standard */
write(1, str, length);
return (length);
}
