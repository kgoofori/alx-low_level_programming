#include "main.h"

/**
 * _isalpha -> checks for lowwercase
 * @c: integer
 * Return: 1 for lowercase and 0 for uppercase
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c >= 'z') || (c <= 'z' && c >= 'Z'));
}
