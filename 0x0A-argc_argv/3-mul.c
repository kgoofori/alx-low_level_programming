

#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int a, b, ans;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ans = a * b;

	printf("%d\n", ans);
	return (0);
}
