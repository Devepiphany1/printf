#include "main.h"
/**
 *putchar - prints char
 *@c: char input
 *Return: 0
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
