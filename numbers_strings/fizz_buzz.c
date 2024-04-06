#include "main.h"

/**
 * print_fizz_buzz - prints numbers from 1 -100
 * It prints Fizz for multiples of 3 and Buzz for multiples of 5
 * Prints FizzBuzz for multiples of both 3 and 5
*/
void print_fizz_buzz(void)
{
	int n, i;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
	}
}
