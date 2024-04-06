#include "main.h"

/**
 * print_fibonacci - print the nth terms of the fibonacci series
 * @n: is the number of terms in the series
*/
void print_fibonacci(int n)
{
	int n1 = 0;
	int n2 = 1;
	int tmp = 0;

	printf("%d,", n1);
	printf(" ");

	while (n2 < n)
	{
		printf("%d", n2);
		tmp = n1 + n2;
		n1 = n2;
		n2 = tmp;

		if (n2 < n)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
