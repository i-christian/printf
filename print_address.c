#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}

/**
 * print_address - prints address of input in hexa format
 * @list: va_list arguments from _printf
 * 
 * Return: number of char printed
 */
int print_address(va_list list)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	if (!p)
		return (write_char("(nil)"));
	str = convert(p, 16, 1);
	count += write_char("0x");
	count += write_char(str);
	return (count);
}
