#include "main.h"

/**
 * print_numbers - function that prints 0123456789
 *
 * Return: void after execution
 */


void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
