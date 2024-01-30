#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *stdard: standard arguement
 *unistd:
 *@printf: prints strings
 *putchar - putchar header file
 *format - specifier
 *Return: 0
 */
int putchar(char c);
int _printf(const char *format, ...);
#endif
