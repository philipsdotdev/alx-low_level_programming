#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: integer to examine
 *
 * Return: l after execution
 */

int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);
}
