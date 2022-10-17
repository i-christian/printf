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
int write_char(char c);
#endif
