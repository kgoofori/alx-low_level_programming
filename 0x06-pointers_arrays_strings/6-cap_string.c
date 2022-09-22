#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: string
*/

char *cap_string(char *string)
{
	char special_chars[] = ",\t;\n; .!?\"(){}";
	int i, x, upper;

	for (i = 0; string[i] != '\0' ; i++)
	{
		upper = 0;

		if (i == 0)
		{
			upper = 1;
       		} else
		{
			for (x = 0; special_chars[x] != '\0'; x++)
			{
		   		if (string[i - 1] == special_chars[x])
				{
					upper = 1;
					break;
				}
	    		}
		}

		if (upper == 1 && string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	}

    return (string);
}
