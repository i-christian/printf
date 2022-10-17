#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
/**
 * struct specifiers - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @fun: the function pointer associated
 */
struct specifiers
{
	char *sym;
	int (*fun)(va_list);
};
typedef struct specifiers specifier;

/*Core functions*/
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list list);
int print_number(va_list);
int unsigned_integer(va_list);
int print_unsgined_number(unsigned int);
int parser(const char *format, specifier fun_list[], va_list arg_list);
int write_char(char c);
#endif
