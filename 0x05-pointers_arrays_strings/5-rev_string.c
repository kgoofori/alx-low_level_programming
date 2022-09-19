#include "main.h"
/**
 * rev_string - prints reversed string
 * @s: pointer
 * Return: void
*/

void rev_string(char *s)
{

	int len, i, half;
	char temp;

	len = 0;

	while (s[len])
	{
		len++;
	}

	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}

}
