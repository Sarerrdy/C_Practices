#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/*times_table(20);*/
	/* putchar('\n');*/
	/*natural_numbers(); */
	/*print_fibonacci(10000);*/
	/*print_fizz_buzz();*/
	print_number(1024);
	printf("\n");
}

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	putchar((n1 % 10) + '0');
}
