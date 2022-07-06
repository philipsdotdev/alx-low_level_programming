#include "main.h"

/**
 * main - print the alphabet, in lowercase
 *
 * Return: Returns 0 after execution
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
