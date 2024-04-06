#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source of copied memory
 * @dest: desitination of copied memory
 * @n: number of times to copy src
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
