#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

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
int parser(const char *format, specifier fun_list[], va_list arg_list);
int write_char(char c);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/*additional functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
#endif
