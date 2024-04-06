#include "main.h"

/**
 * swap_int - swap two variables
 * @a: parameter to be swap
 * @b: parameter to be swap
 */
void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
