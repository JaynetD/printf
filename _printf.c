#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);
	size = _strlen(format);
	if (size <= 0)
		return (0);
	va_start(args, format);
	size = handler(format, args);
	_putchar(-1);
	va_end(args);
	return (size);
}
