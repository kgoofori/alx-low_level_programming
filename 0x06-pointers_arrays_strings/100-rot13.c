#include "main.h"

/**
 * rot13 - replace
 * @str: string
 * Return: string
 */

char *rot13(char *str)
{
	int i, x;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (str[i] == s1[x])
			{
				str[i] = s2[x];
				break;
			}
		}
	}

	return (str);
}
