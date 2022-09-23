#include "main.h"

/**
 * leet - replace
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int i, x;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (str[i] == s1[x] || str[i] == S1[x])
			{
				str[i] = s2[x];
				break;
			}
		}
	}

	return (str);
}
