#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number used 
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	result = n & div;
	if (result == div)
		return (1);
	return (0);
}
