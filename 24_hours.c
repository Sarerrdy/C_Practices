#include <stdio.h>

/**
* main - Print every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59
*/

void main(void)
{
	int i, j;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
}
