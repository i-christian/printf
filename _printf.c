#include "main.h"

/**
 * _printf - Receives the format string and parameters
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	/*define an array of type specifier*/
	specifier fun_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"u", unsigned_integer},
		{"b", print_binary},
		{NULL, NULL}
	};
	/*accepted variable arguments*/
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*call the function parser function*/
	printed_chars = parser(format, fun_list, arg_list);
	va_end(arg_list);

	return (printed_chars);

}
