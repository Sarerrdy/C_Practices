#include "main.h"
/**
* times_table - print an  n times multiplication table, starting with 0
* @n: size of multiplication table. n is between 1 to 15
*/
void times_table(int n)
{
	int i, j, k, l;

	n = n + 1;
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					putchar(k + '0');
				}

				if (k < 10 && j != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
						putchar(' ');
					putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}

				else if (k >= 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((k / 100) + '0');
					l = k % 100;
					putchar((l / 10) + '0');
					putchar((l % 10) + '0');
				}
			}

			putchar('\n');
		}
	}
}
