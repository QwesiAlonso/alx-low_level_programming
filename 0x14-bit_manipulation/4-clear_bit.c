#include "main.h"

/**
 * clear_bit - it sets the value of a given bit to 0
 * @m: a pointer to the number to change
 * @index: an index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *m, unsigned int index)
{
	if (index > 63)
		return (-1);

	*m = (~(1UL << index) & *m);
	return (1);
}
