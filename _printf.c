#include "main.h"

/*
 *comments;
 *
 */
int _printf(const char *format, ...)
{
	unsigned int epip, count = 0;

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
	if (format[epip] == '%' && format[epip + 1] == 'c')
	{


	}

	count += 1;
}


return (count);
