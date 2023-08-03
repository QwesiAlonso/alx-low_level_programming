#include "main.h"

/**
 * flip_bits - it counts the number of bits to change
 * to get from one number to another
 * @i: first number
 * @j: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int i, unsigned long int j)
{
	int n, count = 0;
	unsigned long int current;
	unsigned long int exclusive = i ^ j;

	for (n = 63; n >= 0; n--)
	{
		current = exclusive >> n;
		if (current & 1)
			count++;
	}

	return (count);
}
