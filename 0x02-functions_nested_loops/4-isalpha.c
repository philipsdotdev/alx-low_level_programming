#include "main.h"

/**
 * _isalpha - checks for alphabetic letters
 *
 * @c: character to check
 *
 * Return: 0 or 1 after execution
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
