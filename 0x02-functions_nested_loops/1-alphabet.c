#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(){
	char alpha;

	for (alpha = 'a'; alpha >= 'z', alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}


int main(void)
{
	print_alphabet();
	return (0);
}
