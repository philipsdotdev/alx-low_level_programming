#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet with _putchar, 10 times
 *
 * Return: Returns 0 after execution
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
