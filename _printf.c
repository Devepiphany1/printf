#include "main.h"

/*
 *comments;
 *
 */
int _printf(const char *format, ...)
{
	unsigned int epip, s_count, count = 0;

	va_list args;

	if(!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (epip = 0; format[epip] != '\0'; epip++)
	{
		if (format[epip] != '%')
		{
			putchar(format[epip]);
		}
	}
	else if (format[epip + 1] == 'c')
	{
		putchar(va_arg(args, int));
		epip++;

	}
	else if (format[epip + 1] == '%')
	{
		s_count = putss(va_args(args, *char));
		epip++;
		count += (s_count - 1);
	}
	else if (format [epip + 1 == '%'])
	{
		putchar('%');

	}
	count += 1;
}

va_end(args);
return (count);
