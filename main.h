#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter
 * @ph: type char pointer
 * @function: for the conversion of struct specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int print_i(va_list args);
int print_d(va_list args);
int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);

#endif
