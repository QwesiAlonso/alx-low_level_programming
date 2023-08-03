#include "main.h"

/**
 * binary_to_uint - converts the binary number to unsigned int
 * @i: a string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *i)
{
	int j;
	unsigned int dec_val = 0;

	if (!i)
		return (0);

	for (j = 0; i[j]; j++)
	{
		if (i[j] < '0' || i[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (i[j] - '0');
	}

	return (dec_val);
}
