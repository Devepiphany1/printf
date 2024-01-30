#include "main.h"
/**
 * _printf - prints parameter
 * @format: specific identifier.
 * Return: 0
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_d},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_s},
		{"%R", print_pointer}, {"%b", print_i},
		{"%o", print_i}, {"%x", print_d}, {"%X", print_d},
	};

	va_list args;
	int q = 0, r, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[q] != '\0')
	{
		r = 13;
		while (r >= 0)
		{
			if (p[r].ph[0] == format[q] && p[r].ph[1] == format[q + 1])
			{
				length += p[r].function(args);
				q = q + 2;

			}
			r--;
		}
		_putchar(format[q]);
		length++;
		q++;
	}
	va_end(args);
	return (length);
}
