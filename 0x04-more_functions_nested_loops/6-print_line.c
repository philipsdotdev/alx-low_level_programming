#include "main.h"

/**
 * print_line - funtion that prints an underscore n times
 * @n: number of times printed
 *
 * Return: void after execution
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
