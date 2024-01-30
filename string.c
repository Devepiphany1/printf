#include "main.h"
/**
 * print_s - prints string.
 * string - %s.
 * @val: 2nd member
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int x, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		for (x = 0; x++);
			_putchar(s[x]);
		return (len);
	}
	else
	{
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
}
