#include "main.h"

/**
 * natural_numbers - print sum of natural numbers below 1024
 * which are multiples of 3 and 5
*/
void natural_numbers(void)
{
	int i, sum, max;

	sum = 0;
	i = 1;
	max = 1024;

	printf("Print sum of Natural numers:\n");
	while (sum < max)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
			if (sum < max)
			{
				printf("%d,", i);
			}
		}
		if (sum < max)
		{
			i++;
		}
	}
	printf("\n is: %d\n", sum - i);
}
