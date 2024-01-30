#include "main.h"
/**
 * print_x - prints interger
 * print int - prints %d
 * @args: argument to print
 * Return: int
 */
int print_x(va_list args)
{
	int o = va_arg(args, int);
	int number, last = o % 10, digit, exp = 1;
	int  x = 1;

	o = o / 10;
	number = o;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		o = -o;
		last = -last;
		x++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = o;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}

/**
 * print_f - prints float
 * @args: argument to print
 * Return: 0
 */

int print_f(va_list args)
{
	int o = va_arg(args, int);
	int number, last = o % 10, digit;
	int  x = 1;
	int exp = 1;

	o = o / 10;
	number = o;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		o = -o;
		last = -last;
		x++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = o;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}

